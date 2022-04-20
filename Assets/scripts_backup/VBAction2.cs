using UnityEngine;
using Vuforia;

public class VBAction2 : MonoBehaviour
{
	// Start is called before the first frame update
	void Start()
	{
		GameObject gameObject = GameObject.Find("action");
		gameObject.GetComponent<VirtualButtonBehaviour>().RegisterOnButtonPressed(OnButtonPressed);
		gameObject.GetComponent<VirtualButtonBehaviour>().RegisterOnButtonReleased(OnButtonReleased);

		GameObject gameObject2 = GameObject.Find("action2");
		gameObject2.GetComponent<VirtualButtonBehaviour>().RegisterOnButtonPressed(OnButtonPressed);
		gameObject2.GetComponent<VirtualButtonBehaviour>().RegisterOnButtonReleased(OnButtonReleased);

		GameObject.Find("Cylinder").GetComponent<MeshRenderer>().enabled = false;
	}

	// Update is called once per frame
	void Update()
	{

	}

	public void OnButtonPressed(VirtualButtonBehaviour vb)
	{
		Debug.Log("Button pressed");
		//GameObject.Find("Cube").SetActive(false); // false to hide, true to show
		//http://answers.unity.com/answers/1171148/view.html
		GameObject.Find("Cube").GetComponent<Renderer>().enabled = false;

		GameObject.Find("Cube2").GetComponent<Renderer>().enabled = false;
		GameObject.Find("Cylinder").GetComponent<MeshRenderer>().enabled = true;
	}
	public void OnButtonReleased(VirtualButtonBehaviour vb)
	{
		Debug.Log("Button released");
		//GameObject.Find("Cube").SetActive(true); // false to hide, true to show
		GameObject.Find("Cube").GetComponent<Renderer>().enabled = true;

		GameObject.Find("Cube2").GetComponent<Renderer>().enabled = true;
		GameObject.Find("Cylinder").GetComponent<MeshRenderer>().enabled = false;
	}
}
