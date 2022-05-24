using Assets.scripts;
using System;
using System.Collections;
using System.Linq;
using UnityEngine;
using UnityEngine.UI;

public class GroundPlaneGUI : DefaultObserverEventHandler
{
    private readonly float nativeWidth = 1920f;
    private readonly float nativeHeight = 1080f;
    private readonly float btnWidth = 350;
    private readonly float btnTextHeight = 70;
    private readonly float btnPadding = 5;

    private static readonly float btnLogoHeight = 100;
    private static readonly float btnLogoWidth = btnLogoHeight;
    private static readonly Color textColor = new Color(26, 26, 26); // #1a1a1a = LALALA

    public Texture LogoTexture;
    public Texture RightButtonTexture;
    public decimal totalAmount = GameManager.TotalAmount;
    public string topLeftButtonText = "Please choose and place";

    // screenshot fucntionality
    private bool isFocus = false;
    private bool isScreenshotProcessing = false;
    private string screenshotName;
    private string shareSubject, shareMessage;

    private void Start()
    {
        base.Start();
    }

    private void Update()
    {
        // TODO (future feature) could show preview (transparent) of the model before placement (+ price? +name of model/material?)
        if (GameManager.TotalAmount > 0)
        {
            totalAmount = GameManager.TotalAmount;
        }

        if (!isScreenshotProcessing &&
            !String.IsNullOrEmpty(GameManager.ChooseFurnitureHint + GameManager.ChooseMaterialHint))
        {
            var choose = new[] { GameManager.ChooseMaterialHint, GameManager.ChooseFurnitureHint };
            GameObject.Find("TopText").GetComponent<Text>().text =
                $"Please {String.Join(" & ", choose.Where(s => !String.IsNullOrEmpty(s)))}";
        }
        else
        {
            GameObject.Find("TopText").GetComponent<Text>().text = String.Empty;
        }
    }

    public void OnContentPlaced()
    {
        Debug.Log("OnContentPlaced() called.");

        var currentGroundPlaneModel = GameObject.Find("GroundPlaneModel");
        currentGroundPlaneModel.transform.rotation = GameManager.ModelToPlaceRotation;
        
        // TODO: check placement, sometimes in-air

        decimal price = 0m;
        if (GameManager.ChosenFurnitureCost > 0)
        {
            GameManager.TotalAmount += GameManager.ChosenFurnitureCost;
            price += GameManager.ChosenFurnitureCost;
        }

        if (GameManager.ChosenMaterialCost > 0)
        {
            GameManager.TotalAmount += GameManager.ChosenMaterialCost;
            price += GameManager.ChosenMaterialCost;
        }

        if (GameManager.ChosenFurniture && GameManager.ChosenMaterial)
        {
            GameManager.FunitureWithPrices.Add(
                new Tuple<string, decimal>(
                    $"{GameManager.ChosenFurniture.name} {GameManager.ChosenMaterial.name}",
                    price));
        }

        Debug.Log(string.Join(", ", GameManager.FunitureWithPrices.Select(t => $"['{t.Item1}', '{t.Item2}']")));
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

    void OnGUI()
    {
        //set up scaling
        float rx = Screen.width / nativeWidth;
        float ry = Screen.height / nativeHeight;

        GUI.matrix = Matrix4x4.TRS(
            new Vector3(0, 0, 0),
            Quaternion.identity,
            new Vector3(rx, ry, 1));

        GUIStyle myTextStyle = new GUIStyle(GUI.skin.textField)
        {
            fontSize = 50,
            richText = true,
            alignment = TextAnchor.MiddleCenter
        };
        myTextStyle.normal.textColor = textColor;

        // Logo, left lower corner
        if (!LogoTexture)
        {
            Debug.LogError("Please assign a texture on the inspector");
            return;
        }
        GUI.DrawTexture(
            new Rect(
                btnPadding, nativeHeight - btnLogoHeight - btnPadding,
                btnLogoWidth,
                btnLogoHeight),
            LogoTexture);

        // Screenshot button, right upper corner
        Rect captureScreenshotBtnRect = new Rect(
            nativeWidth - btnWidth - btnPadding,
            btnPadding,
            btnWidth,
            btnTextHeight);

        if (!isScreenshotProcessing)
        {
            var text = "Screenshot";

            if (Application.platform == RuntimePlatform.Android)
            {
                text = "Share";
            }

            // android has another screenshot button, only render for editor
            if (Application.platform != RuntimePlatform.Android)
            {
                var captureScreenshot = GUI.Button(captureScreenshotBtnRect, $"<b>{text}</b>", myTextStyle);

                if (captureScreenshot)
                {
                    OnShareButtonClick();
                }
            }
        }

        // reset button, middle lower
        Rect resetFurnitureListBtnRect = new Rect(
            nativeWidth / 2 - btnWidth / 2,
            nativeHeight - btnTextHeight - btnPadding,
            btnWidth,
            btnTextHeight);

        // android has another reset button, only render for editor
        if (!isScreenshotProcessing &&
            (Application.platform != RuntimePlatform.Android))
        {
            // draw the reset  button
            var resetFurnitureList = GUI.Button(resetFurnitureListBtnRect, "reset", myTextStyle);
            if (resetFurnitureList)
            {
                OnResetFurnitureList();
            }
        }

        // setting the right texture to the currently chosen material, if not fallback to default behaviour
        if (GameManager.ChosenMaterial)
        {
            var test = GameManager.ChosenMaterial.mainTexture;
            RightButtonTexture = test;
        }
        else if (!RightButtonTexture)
        {
            Debug.LogError("Please assign a texture on the inspector");
            return;
        }

        // always draw button if material was chosen, hide when processing screenshot
        if (GameManager.ChosenMaterial || !isScreenshotProcessing)
        {
            GUI.DrawTexture(
            new Rect(
                nativeWidth - btnLogoWidth - btnPadding,
                nativeHeight - btnLogoHeight - btnPadding,
                btnLogoWidth, btnLogoHeight),
            RightButtonTexture);
        }

        if (!isScreenshotProcessing)
        {
            if (GameManager.TotalAmount > 0m)
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
        }

        #region unused placement examples
        //GUI.Box (new Rect (0,0,100,50), "Top-left");
        //GUI.Box (new Rect (1920 - 100,0,100,50), "Top-right");
        //GUI.Box (new Rect (0,1080- 50,100,50), "Bottom-left");
        //GUI.Box (new Rect (Screen.width - 100,Screen.height - 50,100,50), "Bottom right");
        #endregion
    }

    public void OnResetFurnitureList()
    {
        Debug.Log("ResetFurnitureList fired");

        var tags = GameObject.FindGameObjectsWithTag("GroundPlaneTag");
        if (tags.Length > 0)
        {
            foreach (var gameobject in tags[1..])
            {
                GameObject.Destroy(gameobject);
            }
        }

        GameManager.ChosenMaterial = null;
        GameManager.ChosenMaterialCost = 0m;
        GameManager.ChosenFurniture = null;
        GameManager.ChosenFurnitureCost = 0m;
        GameManager.TotalAmount = 0m;
        GameManager.FunitureWithPrices.Clear();
        totalAmount = GameManager.TotalAmount;
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
        Debug.Log("OnShareButtonClick");
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
    /// <summary>
    /// Great documentation by https://agrawalsuneet.github.io/blogs/native-android-image-sharing-in-unity-using-fileprovider/
    /// (also custom android plugin provided)
    /// Android 8+ had problems https://gist.github.com/agrawalsuneet/a39cdbee9fa093a16b817742b602f9e7?permalink_comment_id=3053882#gistcomment-3053882
    /// </summary>
    /// <returns></returns>
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
            //current activity context
            AndroidJavaClass unity = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
            AndroidJavaObject currentActivity = unity.GetStatic<AndroidJavaObject>("currentActivity");

            //Create intent for action send
            AndroidJavaClass intentClass = new AndroidJavaClass("android.content.Intent");
            AndroidJavaObject intentObject = new AndroidJavaObject("android.content.Intent");
            intentObject.Call<AndroidJavaObject>("setAction", intentClass.GetStatic<string>("ACTION_SEND"));

            //create file object of the screenshot captured
            AndroidJavaObject fileObject = new AndroidJavaObject("java.io.File", screenShotPath);

            //create FileProvider class object
            AndroidJavaClass fileProviderClass = new AndroidJavaClass("android.support.v4.content.FileProvider");

            object[] providerParams = new object[3];
            providerParams[0] = currentActivity;
            providerParams[1] = "xyz.lab404.FurnitAR.provider";
            providerParams[2] = fileObject;

            //instead of parsing the uri, will get the uri from file using FileProvider
            AndroidJavaObject uriObject = fileProviderClass.CallStatic<AndroidJavaObject>("getUriForFile", providerParams);

            //put image and string extra
            intentObject.Call<AndroidJavaObject>("putExtra", intentClass.GetStatic<string>("EXTRA_STREAM"), uriObject);
            intentObject.Call<AndroidJavaObject>("setType", "image/png");
            intentObject.Call<AndroidJavaObject>("putExtra", intentClass.GetStatic<string>("EXTRA_SUBJECT"), shareSubject);
            intentObject.Call<AndroidJavaObject>("putExtra", intentClass.GetStatic<string>("EXTRA_TEXT"), shareMessage);

            //additionally grant permission to read the uri
            intentObject.Call<AndroidJavaObject>("addFlags", intentClass.GetStatic<int>("FLAG_GRANT_READ_URI_PERMISSION"));

            AndroidJavaObject chooser = intentClass.CallStatic<AndroidJavaObject>("createChooser", intentObject, "Share your high score");
            currentActivity.Call("startActivity", chooser);
        }

        yield return new WaitUntil(() => isFocus);
        isScreenshotProcessing = false;
    }
#endif
}