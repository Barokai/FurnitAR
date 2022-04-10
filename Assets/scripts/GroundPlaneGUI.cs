using System;
using UnityEngine;

public class GroundPlaneGUI : DefaultTrackableEventHandler //, MonoBehaviour //DefaultObserverEventHandler
{
    private readonly float native_width = 1920f;
    private readonly float native_height = 1080f;
    //public Texture btntexture;
    public Texture LogoTexture;
    public Texture RightButtonTexture;
    public decimal totalAmount;
    public string topLeftButtonText = "Init Done, 0 €";

    private readonly float btnHeight = 110;
    private readonly float btnWidth = 350;

    private readonly float btnTextHeight = 70;

    private readonly float btnPadding = 5;

    private static readonly float btnLogoHeight = 100;
    private static readonly float btnLogoWidth = btnLogoHeight;

    private static readonly Color textColor = new Color(17, 0, 17);

    private bool showTotalAmount = false;

    // https://medium.com/@emrahhozcann/how-to-create-an-ar-augmented-reality-android-app-with-dynamic-target-image-and-3d-model-unity-8f525898da3f

    void Start()
    {
        //mTrackableBehaviour = GetComponent<TrackableBehaviour>();
        //if (mTrackableBehaviour)
        //{
        //	//mTrackableBehaviour.RegisterTrackableEventHandler(this);
        //	mTrackableBehaviour.RegisterOnTrackableStatusChanged(OnTrackableStatusChanged);
        //}

        base.Start();
    }

    protected override void OnTrackingFound()
    {
        Debug.Log("Target Found - mShowGUIButton true");
        showTotalAmount = true;
        OnGUI();
        base.OnTrackingFound();
    }

    protected override void OnTrackingLost()
    {
        Debug.Log("Target Lost - mShowGUIButton false");
        showTotalAmount = false;
        OnGUI();
        base.OnTrackingLost();
    }

    void OnGUI()
    {
        //set up scaling
        float rx = Screen.width / native_width;
        float ry = Screen.height / native_height;

        GUI.matrix = Matrix4x4.TRS(new Vector3(0, 0, 0), Quaternion.identity, new Vector3(rx, ry, 1));

        GUIStyle myTextStyle = new GUIStyle(GUI.skin.textField);
        myTextStyle.fontSize = 50;
        myTextStyle.richText = true;
        myTextStyle.alignment = TextAnchor.MiddleCenter;
        myTextStyle.normal.textColor = textColor;

        // Logo, left lower corner
        if (!LogoTexture)
        {
            Debug.LogError("Please assign a texture on the inspector");
            return;
        }
        GUI.DrawTexture(new Rect(btnPadding, native_height - btnLogoHeight - btnPadding, btnLogoWidth, btnLogoHeight), LogoTexture);

        // Screenshot button, right upper corner
        Rect captureScreenshotBtnRect = new Rect(native_width - btnWidth - btnPadding, btnPadding, btnWidth, btnTextHeight);
        var captureScreenshot = GUI.Button(captureScreenshotBtnRect, $"<b>Screenshot</b>", myTextStyle);
        if (captureScreenshot)
        {
            CaptureScreenshot();
        }

        // reset button, middle lower
        Rect resetFurnitureListBtnRect = new Rect(native_width / 2 - btnWidth / 2, native_height - btnTextHeight - btnPadding, btnWidth, btnTextHeight);
        // draw the reset  button
        var resetFurnitureList = GUI.Button(resetFurnitureListBtnRect, "reset", myTextStyle);
        if (resetFurnitureList)
        {
            ResetFurnitureList();
        }

        if (!RightButtonTexture)
        {
            Debug.LogError("Please assign a texture on the inspector");
            return;
        }
        GUI.DrawTexture(new Rect(native_width - btnLogoWidth - btnPadding, native_height - btnLogoHeight - btnPadding, btnLogoWidth, btnLogoHeight), RightButtonTexture);

        showTotalAmount = true; // TODO: when should this be shown?
        // when clicked, show current calulation --> total sum for all placed pieces of furniture

        if (showTotalAmount)
        {
            if (totalAmount > 0m)
            {
                topLeftButtonText = $"{totalAmount} €";
            }
            //GUI.Label(new Rect(40, 25, btnWidth, btnTextHeight), $"<b>{topLeftButtonText}</b>", myTextStyle);
            GUI.Label(new Rect(btnPadding, btnPadding, btnWidth, btnTextHeight), $"<b>{topLeftButtonText}</b>", myTextStyle);

            //GUI.Box (new Rect (0,0,100,50), "Top-left");
            //GUI.Box (new Rect (1920 - 100,0,100,50), "Top-right");
            //GUI.Box (new Rect (0,1080- 50,100,50), "Bottom-left");
            //GUI.Box (new Rect (Screen.width - 100,Screen.height - 50,100,50), "Bottom right");
        }
    }

    private void ResetFurnitureList()
    {
        throw new NotImplementedException();
    }

    private void CaptureScreenshot()
    {
        ScreenCapture.CaptureScreenshot("filename");
    }

    public void OpenVideoActivity()
    {
        var androidJC = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
        var jo = androidJC.GetStatic<AndroidJavaObject>("currentActivity");
        // Accessing the class to call a static method on it
        var jc = new AndroidJavaClass("com.mobiliya.gepoc.StartVideoActivity");
        // Calling a Call method to which the current activity is passed
        jc.CallStatic("Call", jo);
    }
}