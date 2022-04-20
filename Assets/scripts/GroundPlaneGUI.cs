using Assets.scripts;
using System;
using System.Collections;
using UnityEngine;
using Vuforia.UnityRuntimeCompiled;

// public class GroundPlaneGUI :  DefaultTrackableEventHandler (obsolete) 
public class GroundPlaneGUI : DefaultObserverEventHandler // MonoBehaviour
{
    private readonly float native_width = 1920f;
    private readonly float native_height = 1080f;
    //public Texture btntexture;
    public Texture LogoTexture;
    public Texture RightButtonTexture;
    public decimal totalAmount = Globals.TotalAmount;
    public string topLeftButtonText = "Please choose and place";

    //private readonly float btnHeight = 110;
    private readonly float btnWidth = 350;
    private readonly float btnTextHeight = 70;
    private readonly float btnPadding = 5;

    private static readonly float btnLogoHeight = 100;
    private static readonly float btnLogoWidth = btnLogoHeight;

    private static readonly Color textColor = new Color(26, 26, 26); // #1a1a1a = LALALA


    private GameObject ModelToPlace;
    public Vector3 ModelToPlaceRotation;

    // screenshot fucntionality https://agrawalsuneet.github.io/blogs/native-android-image-sharing-in-unity/
    private bool isFocus = false;
    private bool isScreenshotProcessing = false;
    private string screenshotName;
    private string shareSubject, shareMessage;

    // https://medium.com/@emrahhozcann/how-to-create-an-ar-augmented-reality-android-app-with-dynamic-target-image-and-3d-model-unity-8f525898da3f

    void Start()
    {
        base.Start();
    }

    private void Update()
    {
        if (Globals.TotalAmount > 0)
        {
            totalAmount = Globals.TotalAmount;
        }
    }

    public void OnContentPlaced()
    {
        Debug.Log("OnContentPlaced() called.");

        // Align content to the anchor
        //ModelToPlace.transform.localPosition = Vector3.zero;
        //RotateTowardsCamera(Chair);

        // TODO (Frage an Hr. Anthes) find current model (or the just placed event?) 
        // and rotate it in the same way it was rotated in FurnitureTargetUI


        // mIsPlaced = true;
        if (Globals.ChosenFurnitureCost > 0)
        {
            Globals.TotalAmount += Globals.ChosenFurnitureCost;
        }

        if (Globals.ChosenMaterialCost > 0)
        {
            Globals.TotalAmount += Globals.ChosenFurnitureCost;
        }
    }

    protected override void OnTrackingFound()
    {
        Debug.Log("OnTrackingFound");
        base.OnTrackingFound();
    }

    protected override void OnTrackingLost()
    {
        Debug.Log("OnTrackingLost");
        base.OnTrackingLost();
    }

    //https://forum.unity.com/threads/change-gui-box-color.174609/#post-1194616
    //private Texture2D MakeTex(int width, int height, Color col)
    //{
    //    Color[] pix = new Color[width * height];
    //    for (int i = 0; i < pix.Length; ++i)
    //    {
    //        pix[i] = col;
    //    }
    //    Texture2D result = new Texture2D(width, height);
    //    result.SetPixels(pix);
    //    result.Apply();
    //    return result;
    //}

    void OnGUI()
    {
        //set up scaling
        float rx = Screen.width / native_width;
        float ry = Screen.height / native_height;

        GUI.matrix = Matrix4x4.TRS(new Vector3(0, 0, 0), Quaternion.identity, new Vector3(rx, ry, 1));

        GUIStyle myTextStyle = new GUIStyle(GUI.skin.textField);
        // not working - needed for custom border
        //GUIStyle myTextStyle = new GUIStyle(GUI.skin.box);

        myTextStyle.fontSize = 50;
        myTextStyle.richText = true;
        myTextStyle.alignment = TextAnchor.MiddleCenter;
        myTextStyle.normal.textColor = textColor;
        //myTextStyle.border = new RectOffset(2, 2, 2, 2);

        // not working
        //myTextStyle.normal.background = MakeTex(2, 2, new Color(186, 218, 85)); // #bada55, BADASS!

        // Logo, left lower corner
        if (!LogoTexture)
        {
            Debug.LogError("Please assign a texture on the inspector");
            return;
        }
        GUI.DrawTexture(
            new Rect(
                btnPadding, native_height - btnLogoHeight - btnPadding,
                btnLogoWidth,
                btnLogoHeight),
            LogoTexture);

        // Screenshot button, right upper corner
        Rect captureScreenshotBtnRect = new Rect(
            native_width - btnWidth - btnPadding,
            btnPadding,
            btnWidth,
            btnTextHeight);

        if (!isScreenshotProcessing)
        {
            var text = "Screenshot";
#if UNITY_ANDROID
            if (Application.platform == RuntimePlatform.Android)
            {
                text = "Share";
            }
#endif
            var captureScreenshot = GUI.Button(captureScreenshotBtnRect, $"<b>{text}</b>", myTextStyle);

            if (captureScreenshot)
            {
                CaptureScreenshot();
            }
        }

        // reset button, middle lower
        Rect resetFurnitureListBtnRect = new Rect(
            native_width / 2 - btnWidth / 2,
            native_height - btnTextHeight - btnPadding,
            btnWidth,
            btnTextHeight);

        if (!isScreenshotProcessing)
        {
            // draw the reset  button
            var resetFurnitureList = GUI.Button(resetFurnitureListBtnRect, "reset", myTextStyle);
            if (resetFurnitureList)
            {
                ResetFurnitureList();
            }
        }

        // TODO (Frage an Hr. Anthes) this should be a 2d preview of the furniture place to be set
        if (!RightButtonTexture)
        {
            Debug.LogError("Please assign a texture on the inspector");
            return;
        }

        if (!isScreenshotProcessing)
        {
            GUI.DrawTexture(
            new Rect(
                native_width - btnLogoWidth - btnPadding,
                native_height - btnLogoHeight - btnPadding,
                btnLogoWidth, btnLogoHeight),
            RightButtonTexture);
        }

        if (!isScreenshotProcessing)
        {
            if (Globals.TotalAmount > 0m)
            {
                topLeftButtonText = $"{totalAmount} €";
            }

            GUI.Label(
                new Rect(
                    btnPadding,
                    btnPadding,
                    btnWidth,
                    btnTextHeight),
                $"<b>{topLeftButtonText}</b>",
                myTextStyle);

            //GUI.Box (new Rect (0,0,100,50), "Top-left");
            //GUI.Box (new Rect (1920 - 100,0,100,50), "Top-right");
            //GUI.Box (new Rect (0,1080- 50,100,50), "Bottom-left");
            //GUI.Box (new Rect (Screen.width - 100,Screen.height - 50,100,50), "Bottom right");
        }
    }

    private void ResetFurnitureList()
    {
        Debug.Log("ResetFurnitureList fired");
        var groundPlane = GameObject.Find("GroundPlaneStage");
        foreach (Transform child in groundPlane.transform)
        {
            if (child.gameObject.name != "groundPlaneModel")
            {
                GameObject.Destroy(child.gameObject);
            }

            // TODO skip default model "groundPlaneModel";
        }

        Globals.ChosenMaterial = null;
        Globals.ChosenMaterialCost = 0m;
        Globals.ChosenFurniture = null;
        Globals.ChosenFurnitureCost = 0m;
        Globals.TotalAmount = 0m;
    }

    private void CaptureScreenshot()
    {
        Debug.Log("CaptureScreenshot fired");
        OnShareButtonClick();
    }

    void OnApplicationFocus(bool focus)
    {
        isFocus = focus;
    }

    public void OnAnchorFound()
    {
        Debug.Log("OnAnchorFound");
    }

    public void OnAnchorLost()
    {
        Debug.Log("OnAnchorLost");
    }

    public void OnShareButtonClick()
    {
        screenshotName = "FurnitAR.png";
        shareSubject = "i planned something....";
        shareMessage = "Check it out. \nCheers\n" +
        "\nlab404 - FurnitAR";

        ShareScreenshot();
    }

    private void ShareScreenshot()
    {

#if UNITY_ANDROID
        if (!isScreenshotProcessing)
        {
            StartCoroutine(ShareScreenshotInAnroid());
        }
#else
        Debug.Log($"No sharing set up for this platform, just taking screenshot - filename: {0}");
        ScreenCapture.CaptureScreenshot(screenshotName);
#endif
    }

#if UNITY_ANDROID
    public IEnumerator ShareScreenshotInAnroid()
    {
        isScreenshotProcessing = true;
        // wait for graphics to render
        yield return new WaitForEndOfFrame();

        string screenShotPath = Application.persistentDataPath + "/" + screenshotName;
        ScreenCapture.CaptureScreenshot(screenshotName, 1);
        yield return new WaitForSeconds(0.5f);

        if (!Application.isEditor)
        {
            //Create intent for action send
            AndroidJavaClass intentClass = new AndroidJavaClass("android.content.Intent");
            AndroidJavaObject intentObject = new AndroidJavaObject("android.content.Intent");
            intentObject.Call<AndroidJavaObject>("setAction", intentClass.GetStatic<string>("ACTION_SEND"));

            //create image URI to add it to the intent
            AndroidJavaClass uriClass = new AndroidJavaClass("android.net.Uri");
            AndroidJavaObject uriObject = uriClass.CallStatic<AndroidJavaObject>("parse", "file://" + screenShotPath);

            //put image and string extra
            intentObject.Call<AndroidJavaObject>("putExtra", intentClass.GetStatic<string>("EXTRA_STREAM"), uriObject);
            intentObject.Call<AndroidJavaObject>("setType", "image/png");
            intentObject.Call<AndroidJavaObject>("putExtra", intentClass.GetStatic<string>("EXTRA_SUBJECT"), shareSubject);
            intentObject.Call<AndroidJavaObject>("putExtra", intentClass.GetStatic<string>("EXTRA_TEXT"), shareMessage);

            AndroidJavaClass unity = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
            AndroidJavaObject currentActivity = unity.GetStatic<AndroidJavaObject>("currentActivity");
            AndroidJavaObject chooser = intentClass.CallStatic<AndroidJavaObject>("createChooser", intentObject, "Share your high score");
            currentActivity.Call("startActivity", chooser);
        }

        yield return new WaitUntil(() => isFocus);
        isScreenshotProcessing = false;
    }
#endif
}