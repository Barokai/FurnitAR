using System;
using UnityEngine;
using Random = UnityEngine.Random;

public class Instantiate : MonoBehaviour
{
	public GameObject InstantiatePrefab;
	public float distanceMultiplier = 2.0f;

	// Start is called before the first frame update
	void Start()
	{
		Instantiate(InstantiatePrefab, transform.position, transform.rotation);

		Vector3 pos = transform.position;

		for (int i = 0; i < 4; i++)
		{
			CreatorFunc(pos, i);
			Debug.Log($"made ball {i}");
		}
	}

	private void CreatorFunc(Vector3 pos, int i)
	{
		Vector3 creationPos;
		creationPos = new Vector3(pos.x + i+1 * distanceMultiplier, pos.y, pos.z);
		// https://docs.unity3d.com/ScriptReference/Random.Range.html
		var transformNew = Quaternion.Euler(new Vector3(Random.Range(0f, 360f), Random.Range(0f, 360f), Random.Range(0f, 360f)));

		var instance = Instantiate(InstantiatePrefab, creationPos, transformNew);
		
		// TODO: random scaling (doesn't work yet)
		var VecScale = instance.transform.localScale;
		if (Input.GetKeyUp(KeyCode.KeypadPlus))
		{
			VecScale.y += Random.Range(0.1f, 5.0f);
			VecScale.x += Random.Range(0.1f, 5.0f);
			VecScale.z += Random.Range(0.1f, 5.0f);
		}

		instance.transform.localScale = VecScale;

		// test (by kathi)
		/*
		Vector3 creationPos;
		Vector3 creationScale;
		creationPos = new Vector3(pos.x + i * distanceMultiplier, pos.y, pos.z);
		creationScale = new Vector3(pos.x + i * distanceMultiplier, pos.y, pos.z);

		GameObject instance = Instantiate(myPrefab, creationPos, transform.rotation);

		//Instantiate(myPrefab, creationPos, transform.rotation);

		instance.transform.localScale += creationScale;
		*/

		// OPEN: every second?
	}

	// Update is called once per frame
	void Update()
	{

	}
}
