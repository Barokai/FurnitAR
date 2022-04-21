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
    private const float rotationSpeed = 2500f;

    /// <summary>
    /// Start is called before the first frame update
    /// Initializing models, materials and actions
    /// </summary>
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
        currentModel = Instantiate(model, FurnitureTarget.transform, true);
        currentModel.transform.position = spawnPosition;
        currentModel.transform.localScale = localScale;
        currentModel.name = "CurrentModel";

        var meshRenderers = currentModel.GetComponentsInChildren<MeshRenderer>();
        if (GameManager.ChosenMaterial != null)
        {
            Material[] materials = new Material[1];
            materials[0] = GameManager.ChosenMaterial;
            foreach (var renderer in meshRenderers)
            {
                renderer.materials = materials;
            }

            currentMaterial = GameManager.ChosenMaterial;
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

    /// <summary>
    /// Updating the models materials if they have changed in MaterialTargetGUI
    /// </summary>
    void Update()
    {
        var meshRenderers = currentModel.GetComponentsInChildren<MeshRenderer>();
        if (GameManager.ChosenMaterial != currentMaterial && GameManager.ChosenMaterial != null)
        {
            Material[] materials = new Material[1];
            materials[0] = GameManager.ChosenMaterial;
            foreach (var renderer in meshRenderers)
            {
                renderer.materials = materials;
            }

            currentMaterial = GameManager.ChosenMaterial;
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
    }

    private void OnNextAction(VirtualButtonBehaviour vb)
    {
        Debug.Log("OnNextAction - Furniture");
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
        Debug.Log($"next model index = {nextModel}");
        Debug.Log($"next model       = {furnitureList[FurnitureIndex]}");

        GameObject model = furnitureList[FurnitureIndex];
        var FurnitureTarget = GameObject.Find("FurnitureTarget");
        currentModel = Instantiate(model, FurnitureTarget.transform);
        currentModel.transform.position = spawnPosition;
        currentModel.transform.localScale = localScale;
        currentModel.name = "CurrentModel";

        var meshRenderers = currentModel.GetComponentsInChildren<MeshRenderer>();
        if (currentMaterial != null || GameManager.ChosenMaterial != null)
        {
            Material[] materials = new Material[1];
            if (currentMaterial != null)
            {
                materials[0] = currentMaterial;
            }

            if (GameManager.ChosenMaterial != currentMaterial)
            {
                materials[0] = GameManager.ChosenMaterial;
                currentMaterial = GameManager.ChosenMaterial;
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
        Debug.Log($"previous model index = {previousModel}");
        Debug.Log($"previous model       = {furnitureList[FurnitureIndex]}");

        GameObject model = furnitureList[FurnitureIndex];
        var FurnitureTarget = GameObject.Find("FurnitureTarget");
        currentModel = Instantiate(model, FurnitureTarget.transform);
        currentModel.transform.position = spawnPosition;
        currentModel.transform.localScale = localScale;
        currentModel.name = "CurrentModel";

        var meshRenderers = currentModel.GetComponentsInChildren<MeshRenderer>();
        if (currentMaterial != null || GameManager.ChosenMaterial != null)
        {
            Material[] materials = new Material[1];
            if (currentMaterial != null)
            {
                materials[0] = currentMaterial;
            }

            if (GameManager.ChosenMaterial != currentMaterial)
            {
                materials[0] = GameManager.ChosenMaterial;
                currentMaterial = GameManager.ChosenMaterial;
            }

            foreach (var renderer in meshRenderers)
            {
                renderer.materials = materials;
            }
        }
    }

    /// <summary>
    /// Set chosen model in groundplane
    /// </summary>
    /// <param name="vb"></param>
    private void OnChooseAction(VirtualButtonBehaviour vb)
    {
        Debug.Log($"OnChooseAction - Furniture - chosen {currentModel}");

        var groundPlane = GameObject.Find("GroundPlaneStage");
        var currentGroundPlaneModel = GameObject.Find("groundPlaneModel");
        // TEST (ehem. TODO) (Frage an Hr. Anthes) - objekt hängt in der luft --> scale des groundPlaneModel auf 1,1,1 und y 0.5 !Unbedingt testen! 
        //Vector3 spawnPosition = currentGroundPlaneModel.transform.position;
        Vector3 localScale = currentGroundPlaneModel.transform.localScale;
        Destroy(currentGroundPlaneModel);
        var newGroundPlaneModel = Instantiate(currentModel, groundPlane.transform);
        newGroundPlaneModel.name = "groundPlaneModel";
        newGroundPlaneModel.transform.localScale = localScale;
        newGroundPlaneModel.transform.rotation = currentModel.transform.rotation;

        GameManager.ChosenFurniture = currentModel;
        GameManager.ChosenFurnitureCost = (FurnitureIndex + 1) * 100;
        GameManager.ModelToPlaceRotation = currentModel.transform.rotation;
        Debug.Log($"Chosen Furniture       = {GameManager.ChosenFurniture}");
        Debug.Log($"Chosen Furniture Price = {GameManager.ChosenFurnitureCost}");

        // TODO groundplane could show choosen model in a small 2d view as preview

    }
}
