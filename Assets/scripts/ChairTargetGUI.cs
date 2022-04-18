using Assets.scripts;
using System.Collections.Generic;
using UnityEngine;
using Vuforia;

public class ChairTargetGUI : MonoBehaviour
{
    //public Transform groundPlane;
    public Transform GroundPlane;


    public GameObject Chair1;
    public GameObject Chair2;
    public GameObject Chair3;
    public GameObject Chair4;

    // TODO create list for chairs (with names and price)
    //"chair_1"
    //"chair_2"
    //"chair_3"
    //"chair_4"

    private GameObject currentModel;
    private int ChairIndex = 1; // first element is default
    private readonly List<GameObject> chairList = new(); // { Chair1, Chair2, Chair3, Chair4};
    readonly float rotationSpeed = 5000f; //45

    // Start is called before the first frame update
    void Start()
    {
        chairList.Add(Chair1);
        chairList.Add(Chair2);
        chairList.Add(Chair3);
        chairList.Add(Chair4);

        currentModel = GameObject.Find("chair");
        // doesn't work as the parent object has no meshrenderer

        var chairmeshRenderers = GameObject.Find("chair_1").GetComponentsInChildren<MeshRenderer>();
        foreach (var renderer in chairmeshRenderers)
        {
            renderer.enabled = false;
        }
        chairmeshRenderers = GameObject.Find("chair_2").GetComponentsInChildren<MeshRenderer>();
        foreach (var renderer in chairmeshRenderers)
        {
            renderer.enabled = false;
        }
        chairmeshRenderers = GameObject.Find("chair_3").GetComponentsInChildren<MeshRenderer>();
        foreach (var renderer in chairmeshRenderers)
        {
            renderer.enabled = false;
        }
        chairmeshRenderers = GameObject.Find("chair_4").GetComponentsInChildren<MeshRenderer>();
        foreach (var renderer in chairmeshRenderers)
        {
            renderer.enabled = false;
        }

        // http://answers.unity.com/answers/882050/view.html
        Material mat = Resources.Load("Material/wood_3", typeof(Material)) as Material;
        Material[] mats = new Material[1];
        mats[0] = mat;
        // currentModel.GetComponent<MeshRenderer>().materials = mats; // doesn'T work, as this gameboject only has children
        var meshRenderers = currentModel.GetComponentsInChildren<MeshRenderer>();
        foreach (var renderer in meshRenderers)
        {
            renderer.materials = mats;
        }

        //GroundPlane = GameObject.Find("Ground Plane Stage");

        GameObject chairRotateLeftAction = GameObject.Find("chairRotateLeftAction");
        chairRotateLeftAction.GetComponent<VirtualButtonBehaviour>().RegisterOnButtonPressed(OnRotateLeftAction);
        //gameObject.GetComponent<VirtualButtonBehaviour>().RegisterOnButtonReleased(OnButtonReleased);

        GameObject chairRotateRightAction = GameObject.Find("chairRotateRightAction");
        chairRotateRightAction.GetComponent<VirtualButtonBehaviour>().RegisterOnButtonPressed(OnRotateRightAction);
        //gameObject2.GetComponent<VirtualButtonBehaviour>().RegisterOnButtonReleased(OnButtonReleased);

        GameObject chairNextAction = GameObject.Find("chairNextAction");
        chairNextAction.GetComponent<VirtualButtonBehaviour>().RegisterOnButtonPressed(OnNextAction);
        //gameObject2.GetComponent<VirtualButtonBehaviour>().RegisterOnButtonReleased(OnButtonReleased);

        GameObject chairPreviousAction = GameObject.Find("chairPreviousAction");
        chairPreviousAction.GetComponent<VirtualButtonBehaviour>().RegisterOnButtonPressed(OnPreviousAction);
        //gameObject2.GetComponent<VirtualButtonBehaviour>().RegisterOnButtonReleased(OnButtonReleased);

        GameObject chairChooseAction = GameObject.Find("chairChooseAction");
        chairChooseAction.GetComponent<VirtualButtonBehaviour>().RegisterOnButtonPressed(OnChooseAction);
        //gameObject2.GetComponent<VirtualButtonBehaviour>().RegisterOnButtonReleased(OnButtonReleased);


        //GameObject.Find("Cylinder").GetComponent<MeshRenderer>().enabled = false;
    }

    // Update is called once per frame
    void Update()
    {
        // TODO show selector when target was scanned
        // preview of chair, price, rotate symbols
        // when selected, set in groundview
        // place button?

        //astronaut.transform.parent = groundPlane;

        // do this only once per 3 sec?
        //var groundPlane = GameObject.Find("Ground Plane Stage");
        //Instantiate(currentModel, groundPlane.transform);
    }

    private void OnRotateLeftAction(VirtualButtonBehaviour vb)
    {
        Debug.Log("OnRotateLeftAction");
        //GameObject.Find("Cube").SetActive(false); // false to hide, true to show
        //http://answers.unity.com/answers/1171148/view.html
        //GameObject.Find("Cube").GetComponent<Renderer>().enabled = false;

        //GameObject.Find("Cube2").GetComponent<Renderer>().enabled = false;
        //GameObject.Find("Cylinder").GetComponent<MeshRenderer>().enabled = true;

        currentModel.transform.Rotate(Vector3.back * rotationSpeed * Time.deltaTime);
    }

    private void OnRotateRightAction(VirtualButtonBehaviour vb)
    {
        Debug.Log("OnRotateRightAction");

        currentModel.transform.Rotate(Vector3.forward * rotationSpeed * Time.deltaTime);
        //currentModel.transform.position += Vector3.right * Time.deltaTime;
    }

    private void OnNextAction(VirtualButtonBehaviour vb)
    {
        Debug.Log("OnNextAction");
        Vector3 spawnPosition = currentModel.transform.position;
        Vector3 localScale = currentModel.transform.localScale;
        Destroy(currentModel);
        //var groundPlane = GameObject.Find("Ground Plane Stage");

        // NOTE: how to load resource by name
        //Instantiate(Resources.Load("myCube") as GameObject, spawnPos, transform.rotation);

        //gets the local scale of an object
        //Vector3 local = currentModel.transform.localScale;

        //sets the local scale of an object
        //transform.localScale = new Vector3(scaleX, scaleY, scaleZ);

        //gets the world scale of the object but is read only
        //vector3 world = transform.lossyScale;

        var chairCount = chairList.Count;
        var nextChair = ChairIndex + 1;
        if (nextChair > chairCount)
        {
            nextChair = nextChair % chairCount;
        }

        ChairIndex = nextChair;
        Debug.Log($"next chair index = {nextChair}");
        GameObject chair = GameObject.Find("chair_" + nextChair);

        //currentModel = Instantiate(chair, groundPlane.transform); // did work, but why on groundplane instead of chairtarget?
        var chairTarget = GameObject.Find("ChairTarget");
        currentModel = Instantiate(chair, chairTarget.transform);
        currentModel.transform.position = spawnPosition;
        currentModel.transform.localScale = localScale;
        //currentModel = Instantiate(Chair2, currentModel.transform.position, currentModel.transform.rotation, GroundPlane);
    }

    private void OnPreviousAction(VirtualButtonBehaviour vb)
    {
        Debug.Log("OnPreviousAction");
        Vector3 spawnPosition = currentModel.transform.position;
        Vector3 localScale = currentModel.transform.localScale;

        Destroy(currentModel);
        //var groundPlane = GameObject.Find("Ground Plane Stage");

        var chairCount = chairList.Count;
        var nextChair = ChairIndex - 1;
        if (nextChair == 0)
        {
            nextChair = chairCount;
        }
        ChairIndex = nextChair;
        Debug.Log($"next chair index = {nextChair}");
        GameObject chair = GameObject.Find("chair_" + nextChair);

        //currentModel = Instantiate(chair, groundPlane.transform); // did work, but why on groundplane instead of chairtarget?
        var chairTarget = GameObject.Find("ChairTarget");
        currentModel = Instantiate(chair, chairTarget.transform);
        currentModel.transform.position = spawnPosition;
        currentModel.transform.localScale = localScale;
        //currentModel = Instantiate(Chair2, currentModel.transform.position, currentModel.transform.rotation, GroundPlane);
    }

    private void OnChooseAction(VirtualButtonBehaviour vb)
    {
        Debug.Log("OnChooseAction");

        // TODO set in groundplan as choosen model
        var groundPlane = GameObject.Find("Ground Plane Stage");
        var currentGroundPlaneModel = GameObject.Find("groundPlaneModel");
        Vector3 spawnPosition = currentGroundPlaneModel.transform.position;
        Vector3 localScale = currentGroundPlaneModel.transform.localScale;

        Destroy(currentGroundPlaneModel);
        //currentModel.name = "groundPlaneModel";
        var newGroundPlaneModel = Instantiate(currentModel, groundPlane.transform);
        newGroundPlaneModel.name = "groundPlaneModel";
        //newGroundPlaneModel.transform.position = spawnPosition;
        newGroundPlaneModel.transform.localScale = localScale;

        // TODO rotation?
        newGroundPlaneModel.transform.rotation = currentModel.transform.rotation;

        // TODO groundplane should show choosen model in a small 2d view as preview

        // TODO texture --> should then be moved to texturegui
        // https://stackoverflow.com/a/53420494
    }
}
