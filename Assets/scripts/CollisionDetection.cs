using UnityEngine;

public class CollisionDetection : MonoBehaviour
{
	// Start is called before the first frame update
	void Start()
	{

	}

	// Update is called once per frame
	void Update()
	{

	}

	// slid 26 "physics simulation - collisions and triggers"
	private void OnCollisionEnter(Collision collision)
	{
		if (collision.gameObject.name == "Floor")
		{
			Debug.Log("Hit the floor");
		}
		else if (collision.gameObject.name == "Wall")
		{
			Debug.Log("Hit the wall");

			// adds rigidbody to the object which was hit (in this case the wall) - drops then too
			if (!collision.gameObject.GetComponent<Rigidbody>()) { 
				collision.gameObject.AddComponent<Rigidbody>();
			}

			GameObject.Find("Point Light").GetComponent<Light>().enabled = true;
			GameObject.Find("Point Light").GetComponent<Light>().color = Color.blue;
			GameObject.Find("Point Light").GetComponent<Light>().intensity = 20;
		}
	}

	// to find out if a object moved trough an object (disable mesh renderer to hide it then)
	private void OnTriggerEnter(Collider other)
	{
		if (other.gameObject.name == "Wall") {
			Debug.Log("Went throught the wall");
		}
	}
}
