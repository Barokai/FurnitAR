using Assets.scripts;
using System.Collections.Generic;
using UnityEngine;
using Vuforia;

public class MaterialTargetGUI : MonoBehaviour
{
    public Material base_material;
    public Material base_material2;
    public Material cloth_1;
    public Material cloth_2;
    public Material cloth_3;
    public Material cloth_4;
    public Material floor;
    public Material wood_1;
    public Material wood_2;
    public Material wood_3;
    public Material riffelblech;

    private Material currentMaterial;
    private int materialIndex = 3; // old school cloth
    private readonly List<Material> materialList = new();

    // Start is called before the first frame update
    void Start()
    {
        //base_material = Resources.Load($"Material/{nameof(base_material)}", typeof(Material)) as Material;
        //base_material2 = Resources.Load($"Material/{nameof(base_material2)}", typeof(Material)) as Material;
        cloth_1 = Resources.Load($"Material/{nameof(cloth_1)}", typeof(Material)) as Material;
        cloth_2 = Resources.Load($"Material/{nameof(cloth_2)}", typeof(Material)) as Material;
        cloth_3 = Resources.Load($"Material/{nameof(cloth_3)}", typeof(Material)) as Material;
        cloth_4 = Resources.Load($"Material/{nameof(cloth_4)}", typeof(Material)) as Material;
        floor = Resources.Load($"Material/{nameof(floor)}", typeof(Material)) as Material;
        wood_1 = Resources.Load($"Material/{nameof(wood_1)}", typeof(Material)) as Material;
        wood_2 = Resources.Load($"Material/{nameof(wood_2)}", typeof(Material)) as Material;
        wood_3 = Resources.Load($"Material/{nameof(wood_3)}", typeof(Material)) as Material;
        riffelblech = Resources.Load($"Material/{nameof(riffelblech)}", typeof(Material)) as Material;

        //materialList.Add(base_material);
        //materialList.Add(base_material2);
        materialList.Add(cloth_1);
        materialList.Add(cloth_2);
        materialList.Add(cloth_3);
        materialList.Add(cloth_4);
        materialList.Add(floor);
        materialList.Add(wood_1);
        materialList.Add(wood_2);
        materialList.Add(wood_3);
        materialList.Add(riffelblech);

        // http://answers.unity.com/answers/882050/view.html - code below was used for testing
        // Material mat = Resources.Load("Material/wood_3", typeof(Material)) as Material;
        Material[] materials = new Material[1];
        currentMaterial = materialList[materialIndex];
        materials[0] = currentMaterial;
        var meshRenderer = GameObject.Find("MaterialPreviewQuad").GetComponent<MeshRenderer>();
        meshRenderer.materials = materials;
        currentMaterial = GameObject.Find("MaterialPreviewQuad").GetComponent<MeshRenderer>().material;

        GameObject materialNextAction = GameObject.Find("materialNextAction");
        materialNextAction.GetComponent<VirtualButtonBehaviour>().RegisterOnButtonPressed(OnNextAction);

        GameObject materialPreviousAction = GameObject.Find("materialPreviousAction");
        materialPreviousAction.GetComponent<VirtualButtonBehaviour>().RegisterOnButtonPressed(OnPreviousAction);

        GameObject materialChooseAction = GameObject.Find("materialChooseAction");
        materialChooseAction.GetComponent<VirtualButtonBehaviour>().RegisterOnButtonPressed(OnChooseAction);
    }

    // Update is called once per frame
    void Update()
    {
        // TODO show selector when target was scanned
        // preview of material, price, rotate symbols
        // when selected, set in groundview
        // place button?

        //astronaut.transform.parent = groundPlane;

        // do this only once per 3 sec?
        //var groundPlane = GameObject.Find("GroundPlaneStage");
        //Instantiate(currentModel, groundPlane.transform);
    }

    private void OnNextAction(VirtualButtonBehaviour vb)
    {
        Debug.Log("OnNextAction");

        var materialCount = materialList.Count;
        var nextmaterial = materialIndex + 1;
        if (nextmaterial == materialCount)
        {
            nextmaterial = nextmaterial % materialCount;
        }

        materialIndex = nextmaterial;
        Debug.Log($"next material index = {nextmaterial}");
        //Material material = materialList[materialIndex];

        Material[] mats = new Material[1];
        mats[0] = materialList[materialIndex];
        var meshRenderer = GameObject.Find("MaterialPreviewQuad").GetComponent<MeshRenderer>();
        meshRenderer.materials = mats;
        currentMaterial = materialList[materialIndex]; //GameObject.Find("MaterialPreviewQuad").GetComponent<MeshRenderer>().material;
    }

    private void OnPreviousAction(VirtualButtonBehaviour vb)
    {
        Debug.Log("OnPreviousAction");
        var materialCount = materialList.Count;
        var previousMaterial = materialIndex - 1;
        if (previousMaterial < 0)
        {
            previousMaterial = materialCount - 1;
        }
        materialIndex = previousMaterial;
        Debug.Log($"previous material index = {previousMaterial}");

        Material[] mats = new Material[1];
        mats[0] = materialList[materialIndex];
        var meshRenderer = GameObject.Find("MaterialPreviewQuad").GetComponent<MeshRenderer>();
        meshRenderer.materials = mats;
        currentMaterial = materialList[materialIndex];//GameObject.Find("MaterialPreviewQuad").GetComponent<MeshRenderer>().material;
    }

    private void OnChooseAction(VirtualButtonBehaviour vb)
    {
        Debug.Log("OnChooseAction - Material");

        // TODO set in groundplan as choosen model
        //var groundPlane = GameObject.Find("GroundPlaneStage");
        //var currentGroundPlaneModel = GameObject.Find("groundPlaneModel");
        //Vector3 spawnPosition = currentGroundPlaneModel.transform.position;
        //Vector3 localScale = currentGroundPlaneModel.transform.localScale;

        //Destroy(currentGroundPlaneModel);
        ////currentModel.name = "groundPlaneModel";
        //var newGroundPlaneModel = Instantiate(currentModel, groundPlane.transform);
        //newGroundPlaneModel.name = "groundPlaneModel";
        ////newGroundPlaneModel.transform.position = spawnPosition;
        //newGroundPlaneModel.transform.localScale = localScale;

        //// TODO rotation?
        //newGroundPlaneModel.transform.rotation = currentModel.transform.rotation;

        // TODO groundplane should show choosen model in a small 2d view as preview


        // TODO set ModelToPlace in groundplaneGUI

        GameManager.ChosenMaterial = currentMaterial;
        GameManager.ChosenMaterialCost = (materialIndex + 1) * 10;
        Debug.Log($"Chosen Material       = {GameManager.ChosenMaterial}");
        Debug.Log($"Chosen Material Price = {GameManager.ChosenMaterialCost}");
    }
}
