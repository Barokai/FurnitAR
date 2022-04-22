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
    private int materialIndex = 1; // old school cloth - was 3 with the base materials
    private readonly List<Material> materialList = new();

    /// <summary>
    /// Start is called before the first frame update
    /// Initializing materials and actions
    /// </summary>
    void Start()
    {
        cloth_1 = Resources.Load($"Material/{nameof(cloth_1)}", typeof(Material)) as Material;
        cloth_2 = Resources.Load($"Material/{nameof(cloth_2)}", typeof(Material)) as Material;
        cloth_3 = Resources.Load($"Material/{nameof(cloth_3)}", typeof(Material)) as Material;
        cloth_4 = Resources.Load($"Material/{nameof(cloth_4)}", typeof(Material)) as Material;
        floor = Resources.Load($"Material/{nameof(floor)}", typeof(Material)) as Material;
        wood_1 = Resources.Load($"Material/{nameof(wood_1)}", typeof(Material)) as Material;
        wood_2 = Resources.Load($"Material/{nameof(wood_2)}", typeof(Material)) as Material;
        wood_3 = Resources.Load($"Material/{nameof(wood_3)}", typeof(Material)) as Material;
        riffelblech = Resources.Load($"Material/{nameof(riffelblech)}", typeof(Material)) as Material;

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
    }

    private void OnNextAction(VirtualButtonBehaviour vb)
    {
        Debug.Log("OnNextAction - Material");

        var materialCount = materialList.Count;
        var nextmaterial = materialIndex + 1;
        if (nextmaterial == materialCount)
        {
            nextmaterial = nextmaterial % materialCount;
        }

        materialIndex = nextmaterial;
        Debug.Log($"next material index = {nextmaterial}");
        Debug.Log($"next material       = {materialList[materialIndex]}");

        Material[] mats = new Material[1];
        mats[0] = materialList[materialIndex];
        var meshRenderer = GameObject.Find("MaterialPreviewQuad").GetComponent<MeshRenderer>();
        meshRenderer.materials = mats;
        currentMaterial = materialList[materialIndex];
    }

    private void OnPreviousAction(VirtualButtonBehaviour vb)
    {
        Debug.Log("OnPreviousAction - Material");
        var materialCount = materialList.Count;
        var previousMaterial = materialIndex - 1;
        if (previousMaterial < 0)
        {
            previousMaterial = materialCount - 1;
        }
        materialIndex = previousMaterial;
        Debug.Log($"previous material index = {previousMaterial}");
        Debug.Log($"previous material       = {materialList[materialIndex]}");

        Material[] mats = new Material[1];
        mats[0] = materialList[materialIndex];
        var meshRenderer = GameObject.Find("MaterialPreviewQuad").GetComponent<MeshRenderer>();
        meshRenderer.materials = mats;
        currentMaterial = materialList[materialIndex];
    }

    private void OnChooseAction(VirtualButtonBehaviour vb)
    {
        Debug.Log($"OnChooseAction - Material - chosen {currentMaterial}");
        GameManager.ChosenMaterial = currentMaterial;
        GameManager.ChosenMaterialCost = (materialIndex + 1) * 10;
        Debug.Log($"Chosen Material       = {GameManager.ChosenMaterial}");
        Debug.Log($"Chosen Material Price = {GameManager.ChosenMaterialCost}");
    }
}
