using UnityEngine;

public class CreateBoxPile : MonoBehaviour
{
	public GameObject InstantiatePrefab;

	// Start is called before the first frame update
	void Start()
	{
		Vector3 pos = transform.position;

		for (int i = 0; i < 25; i++)
		{
			CreatorFunc(pos, i);
			Debug.Log($"made ball {i}");
		}
	}

	private void CreatorFunc(Vector3 pos, int i)
	{
		Vector3 creationPos;
		creationPos = new Vector3(pos.x, pos.y + i + 0.5f, pos.z);

		var instance = Instantiate(InstantiatePrefab, creationPos, transform.rotation); //, transformNew);
    //  TODO: check to add rigidbody if not present on InstantiatePrefab

		// add sound on collision?
	}
}
