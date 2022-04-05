using UnityEngine;

public class MyScript : MonoBehaviour
{
	//int counter = 0;
	Vector3 Vec;
	Vector3 OriginPos;

	Vector3 VecScale;
	Vector3 OriginScale;

	float scaleFactor = 1.1f;

	public float myTimer = 5.0f;

	public GameObject script;
	// Start is called before the first frame update
	void Start()
	{
		OriginPos = transform.localPosition;
		OriginScale = transform.localScale;
	}

	// Update is called once per frame
	void Update()
	{
		//if (Input.GetButtonUp("Jump")) {
		//	counter++;
		//	Debug.Log($"hit space bar {counter}x");
		//}

		Vec = transform.localPosition;
		Vec.y += Input.GetAxis("Jump") * Time.deltaTime * 20;
		Vec.x += Input.GetAxis("Horizontal") * Time.deltaTime * 20;
		Vec.z += Input.GetAxis("Vertical") * Time.deltaTime * 20;

		// touch test - http://answers.unity.com/answers/641324/view.html
		if (Input.touchCount > 0)
		{
			Vec.x = Input.GetAxis("Mouse X") * Time.deltaTime * 20;
			Vec.y = Input.GetAxis("Mouse Y") * Time.deltaTime * 20;
		}

		transform.localPosition = Vec;

		// + upscale, - downscale (both numpad)
		VecScale = transform.localScale;
		if (Input.GetKeyUp(KeyCode.KeypadPlus)) {
			VecScale.y *= scaleFactor;
			VecScale.x *= scaleFactor;
			VecScale.z *= scaleFactor;
		}
		if (Input.GetKeyUp(KeyCode.KeypadMinus)) {
			VecScale.y /= scaleFactor;
			VecScale.x /= scaleFactor;
			VecScale.z /= scaleFactor;
		}
		if (Input.GetKeyUp(KeyCode.X))
		{
			VecScale.x *= scaleFactor;
		}
		if (Input.GetKeyUp(KeyCode.Y))
		{
			VecScale.y *= scaleFactor;
		}
		if (Input.GetKeyUp(KeyCode.Z))
		{
			VecScale.z *= scaleFactor;
		}
		transform.localScale = VecScale;

		// reset
		if (Input.GetKey(KeyCode.KeypadEnter))
		{
			transform.localPosition = OriginPos;
			transform.localScale = OriginScale;
		}

		// destroy
		if (Input.GetKeyUp(KeyCode.KeypadPeriod)) {
			Destroy(GameObject.Find("Sphere"), 1); // bad performance
		}

		if (Input.GetKeyUp(KeyCode.Delete) || Input.GetKeyUp(KeyCode.Backspace))
		{
			Destroy(this.gameObject); // bad performance
		}

		if (myTimer > 0) {
			myTimer -= Time.deltaTime; // time passesd since last frame update (in ms)
		}
		if (myTimer <= 0)
		{
			Debug.Log("Game Over");
		}
		

	}
}
