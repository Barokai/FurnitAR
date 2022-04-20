using Assets.scripts;
using System.Collections.Generic;
using UnityEngine;
using Vuforia;

public class FurnitureTargetGUI : MonoBehaviour
{
    public GameObject toilet;
    public GameObject chair_1;
    public GameObject chair_2;
    public GameObject chair_3;
    public GameObject chair_4;

    private GameObject currentModel;
    private Material currentMaterial;
    private int FurnitureIndex = 0;
    private readonly List<GameObject> furnitureList = new();
    readonly float rotationSpeed = 2500f; //45

    // Start is called before the first frame update
    void Start()
    {
        toilet = Resources.Load($"Prefabs/Bathroom/{nameof(toilet)}", typeof(GameObject)) as GameObject;
        chair_1 = Resources.Load($"Prefabs/Sofas&Chairs/{nameof(chair_1)}", typeof(GameObject)) as GameObject;
        chair_2 = Resources.Load($"Prefabs/Sofas&Chairs/{nameof(chair_2)}", typeof(GameObject)) as GameObject;
        chair_3 = Resources.Load($"Prefabs/Sofas&Chairs/{nameof(chair_3)}", typeof(GameObject)) as GameObject;
        chair_4 = Resources.Load($"Prefabs/Sofas&Chairs/{nameof(chair_4)}", typeof(GameObject)) as GameObject;

        furnitureList.Add(toilet);
        furnitureList.Add(chair_1);
        furnitureList.Add(chair_2);
        furnitureList.Add(chair_3);
        furnitureList.Add(chair_4);

        currentModel = GameObject.Find("CurrentModel");
        Vector3 spawnPosition = currentModel.transform.position;
        Vector3 localScale = currentModel.transform.localScale;
        Destroy(currentModel);
        var model = furnitureList[FurnitureIndex];
        var FurnitureTarget = GameObject.Find("FurnitureTarget");
        currentModel = Instantiate(model, FurnitureTarget.transform);
        currentModel.transform.position = spawnPosition;
        currentModel.transform.localScale = localScale;

        // http://answers.unity.com/answers/882050/view.html - code below was used for testing
        // Material mat = Resources.Load("Material/wood_3", typeof(Material)) as Material;

        var meshRenderers = currentModel.GetComponentsInChildren<MeshRenderer>();
        if (Globals.ChosenMaterial != null)
        {
            Material[] materials = new Material[1];
            //materials[0] = mat;
            materials[0] = Globals.ChosenMaterial;
            foreach (var renderer in meshRenderers)
            {
                renderer.materials = materials;
            }

            currentMaterial = Globals.ChosenMaterial;
        }

        GameObject chairRotateLeftAction = GameObject.Find("chairRotateLeftAction");
        chairRotateLeftAction.GetComponent<VirtualButtonBehaviour>().RegisterOnButtonPressed(OnRotateLeftAction);

        GameObject chairRotateRightAction = GameObject.Find("chairRotateRightAction");
        chairRotateRightAction.GetComponent<VirtualButtonBehaviour>().RegisterOnButtonPressed(OnRotateRightAction);

        GameObject chairNextAction = GameObject.Find("chairNextAction");
        chairNextAction.GetComponent<VirtualButtonBehaviour>().RegisterOnButtonPressed(OnNextAction);

        GameObject chairPreviousAction = GameObject.Find("chairPreviousAction");
        chairPreviousAction.GetComponent<VirtualButtonBehaviour>().RegisterOnButtonPressed(OnPreviousAction);

        GameObject chairChooseAction = GameObject.Find("chairChooseAction");
        chairChooseAction.GetComponent<VirtualButtonBehaviour>().RegisterOnButtonPressed(OnChooseAction);
    }

    // Update is called once per frame
    void Update()
    {
        var meshRenderers = currentModel.GetComponentsInChildren<MeshRenderer>();
        if (Globals.ChosenMaterial != currentMaterial)
        {
            Material[] materials = new Material[1];
            materials[0] = Globals.ChosenMaterial;
            foreach (var renderer in meshRenderers)
            {
                renderer.materials = materials;
            }

            currentMaterial = Globals.ChosenMaterial;
        }
    }

    private void OnRotateLeftAction(VirtualButtonBehaviour vb)
    {
        Debug.Log("OnRotateLeftAction");

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

        var modelCount = furnitureList.Count;
        var nextModel = FurnitureIndex + 1;
        if (nextModel == modelCount)
        {
            nextModel = nextModel % modelCount;
        }

        FurnitureIndex = nextModel;
        Debug.Log($"next chair index = {nextModel}");
        GameObject model = furnitureList[FurnitureIndex];

        //currentModel = Instantiate(chair, groundPlane.transform); // did work, but why on groundplane instead of FurnitureTarget?
        var FurnitureTarget = GameObject.Find("FurnitureTarget");
        currentModel = Instantiate(model, FurnitureTarget.transform);
        currentModel.transform.position = spawnPosition;
        currentModel.transform.localScale = localScale;
        
        var meshRenderers = currentModel.GetComponentsInChildren<MeshRenderer>();
        if (currentMaterial != null || Globals.ChosenMaterial != null)
        {
            Material[] materials = new Material[1];
            if (currentMaterial != null)
            {
                materials[0] = currentMaterial;
            }

            if (Globals.ChosenMaterial != currentMaterial)
            {
                materials[0] = Globals.ChosenMaterial;
                currentMaterial = Globals.ChosenMaterial;
            }

            foreach (var renderer in meshRenderers)
            {
                renderer.materials = materials;
            }
        }
    }

    private void OnPreviousAction(VirtualButtonBehaviour vb)
    {
        Debug.Log("OnPreviousAction");
        Vector3 spawnPosition = currentModel.transform.position;
        Vector3 localScale = currentModel.transform.localScale;

        Destroy(currentModel);

        var modelCount = furnitureList.Count;
        var previousModel = FurnitureIndex - 1;
        if (previousModel < 0)
        {
            previousModel = modelCount - 1;
        }
        FurnitureIndex = previousModel;
        Debug.Log($"next chair index = {previousModel}");
        GameObject model = furnitureList[FurnitureIndex];

        //currentModel = Instantiate(chair, groundPlane.transform); // did work, but why on groundplane instead of FurnitureTarget?
        var FurnitureTarget = GameObject.Find("FurnitureTarget");
        currentModel = Instantiate(model, FurnitureTarget.transform);
        currentModel.transform.position = spawnPosition;
        currentModel.transform.localScale = localScale;

        var meshRenderers = currentModel.GetComponentsInChildren<MeshRenderer>();
        if (currentMaterial != null || Globals.ChosenMaterial != null)
        {
            Material[] materials = new Material[1];
            if(currentMaterial != null)
            {
                materials[0] = currentMaterial;
            }
            
            if (Globals.ChosenMaterial != currentMaterial)
            {
                materials[0] = Globals.ChosenMaterial;
                currentMaterial = Globals.ChosenMaterial;
            }

            foreach (var renderer in meshRenderers)
            {
                renderer.materials = materials;
            }
        }
    }

    private void OnChooseAction(VirtualButtonBehaviour vb)
    {
        Debug.Log("OnChooseAction");

        // set chosen model in groundplane
        var groundPlane = GameObject.Find("GroundPlaneStage");
        var currentGroundPlaneModel = GameObject.Find("groundPlaneModel");
        Vector3 spawnPosition = currentGroundPlaneModel.transform.position;
        Vector3 localScale = currentGroundPlaneModel.transform.localScale;
        Destroy(currentGroundPlaneModel);
        var newGroundPlaneModel = Instantiate(currentModel, groundPlane.transform);
        newGroundPlaneModel.name = "groundPlaneModel";
        newGroundPlaneModel.transform.position = spawnPosition;
        newGroundPlaneModel.transform.localScale = localScale;


        // TODO (Frage an Hr. Anthes) rotation?
        newGroundPlaneModel.transform.rotation = currentModel.transform.rotation;

        // TODO groundplane should show choosen model in a small 2d view as preview

        // TODO texture --> should then be moved to texturegui
        // https://stackoverflow.com/a/53420494

        // TODO set ModelToPlace in groundplaneGUI

        Globals.ChosenFurniture = currentModel;
        Globals.ChosenFurnitureCost = (FurnitureIndex + 1) * 10;
    }
}
