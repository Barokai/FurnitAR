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
    public Material wood_4;

    private Material currentMaterial;
    private int materialIndex = 3; // old school cloth
    private readonly List<Material> materialList = new(); 

    // Start is called before the first frame update
    void Start()
    {
        // TODO prices for material?
        base_material = Resources.Load($"Material/{nameof(base_material)}", typeof(Material)) as Material;
        base_material2 = Resources.Load($"Material/{nameof(base_material2)}", typeof(Material)) as Material;
        cloth_1 = Resources.Load($"Material/{nameof(cloth_1)}", typeof(Material)) as Material;
        cloth_2 = Resources.Load($"Material/{nameof(cloth_2)}", typeof(Material)) as Material;
        cloth_3 = Resources.Load($"Material/{nameof(cloth_3)}", typeof(Material)) as Material;
        cloth_4 = Resources.Load($"Material/{nameof(cloth_4)}", typeof(Material)) as Material;
        floor = Resources.Load($"Material/{nameof(floor)}", typeof(Material)) as Material;
        wood_1 = Resources.Load($"Material/{nameof(wood_1)}", typeof(Material)) as Material;
        wood_2 = Resources.Load($"Material/{nameof(wood_2)}", typeof(Material)) as Material;
        wood_3 = Resources.Load($"Material/{nameof(wood_3)}", typeof(Material)) as Material;
        wood_4 = Resources.Load($"Material/{nameof(wood_4)}", typeof(Material)) as Material;

        materialList.Add(base_material);
        materialList.Add(base_material2);
        materialList.Add(cloth_1);
        materialList.Add(cloth_2);
        materialList.Add(cloth_3);
        materialList.Add(cloth_4);
        materialList.Add(floor);
        materialList.Add(wood_1);
        materialList.Add(wood_2);
        materialList.Add(wood_3);
        materialList.Add(wood_4);

        // http://answers.unity.com/answers/882050/view.html
        Material[] materials = new Material[1];
        materials[0] = materialList[0];
        var meshRenderer = GameObject.Find("MaterialPreviewQuad").GetComponent<MeshRenderer>();
        meshRenderer.materials = materials;
        currentMaterial = GameObject.Find("MaterialPreviewQuad").GetComponent<MeshRenderer>().material;

        GameObject materialNextAction = GameObject.Find("materialNextAction");
        materialNextAction.GetComponent<VirtualButtonBehaviour>().RegisterOnButtonPressed(OnNextAction);
        //gameObject2.GetComponent<VirtualButtonBehaviour>().RegisterOnButtonReleased(OnButtonReleased);

        GameObject materialPreviousAction = GameObject.Find("materialPreviousAction");
        materialPreviousAction.GetComponent<VirtualButtonBehaviour>().RegisterOnButtonPressed(OnPreviousAction);
        //gameObject2.GetComponent<VirtualButtonBehaviour>().RegisterOnButtonReleased(OnButtonReleased);

        GameObject materialChooseAction = GameObject.Find("materialChooseAction");
        materialChooseAction.GetComponent<VirtualButtonBehaviour>().RegisterOnButtonPressed(OnChooseAction);
        //gameObject2.GetComponent<VirtualButtonBehaviour>().RegisterOnButtonReleased(OnButtonReleased);

        // TODO add flag if a button is currently pressed in "on..actions"
        // TODO released methods to unset in "on...releasedactions"
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
            previousMaterial = materialCount-1;
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
        Debug.Log("OnChooseAction");

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

        // TODO texture --> should then be moved to texturegui
        // https://stackoverflow.com/a/53420494

        // TODO set ModelToPlace in groundplaneGUI

        Globals.ChosenMaterial = currentMaterial;
        Globals.ChosenMaterialCost = (materialIndex + 1) * 10;
    }
}
