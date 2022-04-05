using UnityEngine;

public class JumpingBall : MonoBehaviour
{
	Vector3 Vec;
	Vector3 OriginPos;

	float maxHeight = 2.0f;
	float stepHeight = 0.1f;
	bool up = true;

	public float speed = 5.0f;
	public float power = 500.0f;

	// Start is called before the first frame update
	void Start()
	{
		OriginPos = transform.localPosition;
		this.GetComponent<Rigidbody>().AddForce(0, power, 0);
	}

	// Update is called once per frame
	void Update()
	{
		Vec = transform.localPosition;
		Vec.y = Mathf.PingPong(Time.time * speed, maxHeight) + OriginPos.y; // GetY(Vec.y) * Time.deltaTime * speed; // Input.GetAxis("Jump") * Time.deltaTime * speed;
		Vec.x += Input.GetAxis("Horizontal") * Time.deltaTime * speed;
		Vec.z += Input.GetAxis("Vertical") * Time.deltaTime * speed;
		transform.localPosition = Vec;

		// reset
		if (Input.GetKey(KeyCode.KeypadEnter))
		{
			transform.localPosition = OriginPos;
		}
	}

	// doesn't work, just moves up
	float GetY(float y)
	{
		if (up && y >= maxHeight)
		{
			up = false;
			y -= stepHeight;
		}

		if (up && y <= maxHeight)
		{
			up = true;
			y += stepHeight;
		}

		if (!up && y > OriginPos.y)
		{
			up = false;
			y -= stepHeight;
		}

		if (!up && y <= OriginPos.y)
		{
			up = true;
			y += stepHeight;
		}

		return y;
	}
}
