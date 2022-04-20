using UnityEngine;

// tracker https://developer.vuforia.com/forum/unity-extension-technical-discussion/tracking-events
public class MoveBetweenTargets : MonoBehaviour
{
	Vector3 OriginPos;
	Vector3 TargetPos;
	
	public float speed = 1f;
	public bool turnAround = false;
	string direction = "target";
	//pubblic float maxDistanceDelta = 1f; // = speed * Time.deltaTime;

	//public int steps = 100;
	//public int stepsDone = 1;

	// Start is called before the first frame update
	void Start()
	{
		//OriginPos = GameObject.Find("ImageTarget").transform.position;
		//TargetPos = GameObject.Find("ImageTarget2").transform.position;
		OriginPos = GameObject.Find("ImageTarget").transform.position; // ball not visible if using localPosition;
		TargetPos = GameObject.Find("ImageTarget2").transform.position; // ball not visible if using localPosition;

		transform.localPosition = OriginPos;
	}

	// Update is called once per frame
	void Update()
	{
		OriginPos = GameObject.Find("ImageTarget").transform.position; // ball not visible if using localPosition;
		TargetPos = GameObject.Find("ImageTarget2").transform.position; // ball not visible if using localPosition;

		if (Input.GetKey(KeyCode.KeypadEnter))
		{
			transform.localPosition = OriginPos;
		}
		if (Input.GetKey(KeyCode.KeypadPlus))
		{
			transform.localPosition = TargetPos;
		}

		var step = speed * Time.deltaTime;
		//transform.position = Vector3.MoveTowards(transform.position, TargetPos, step);

		// reverse direction doesn't work yet
		turnAround = transform.localPosition == TargetPos;

		if (!turnAround)
		{
			transform.localPosition = Vector3.MoveTowards(transform.localPosition, TargetPos, step);
			//turnAround = transform.localPosition == TargetPos;
		}
		else {
			transform.localPosition = Vector3.MoveTowards(transform.localPosition, OriginPos, step);
			//turnAround = transform.localPosition == OriginPos;
		}

		//if (stepsDone < steps)
		//{
		//	float stepX = (OriginPos.x - TargetPos.x) / steps * stepsDone;
		//	float stepY = (OriginPos.y - TargetPos.y) / steps * stepsDone;
		//	float stepZ = (OriginPos.z - TargetPos.z) / steps * stepsDone;
		//	var Vec = OriginPos; //transform.position;
		//	Vec.x += OriginPos.x + stepX;
		//	Vec.y += OriginPos.y + stepY;
		//	Vec.z += OriginPos.z + stepZ;
		//	//Vec.y += Mathf.PingPong(Time.time * speed, TargetPos.y);
		//	//Vec.z += Mathf.PingPong(Time.time * speed, TargetPos.z);// + OriginPos.x; // Input.GetAxis("Horizontal") * Time.deltaTime * speed;
		//	transform.position = Vec;
		//	stepsDone++;
		//}


		//step = speed * Time.deltaTime;
		//if (newOriginPos == null) {
		//	newOriginPos = OriginPos; // transform.localPosition;
		//	transform.localPosition = OriginPos;
		//}

		// NOTE: from JumpingBall with PingPong()
		//var Vec = OriginPos; //transform.position;
		//Vec.x += Mathf.PingPong(Time.time * speed, TargetPos.x);
		//Vec.y += Mathf.PingPong(Time.time * speed, TargetPos.y);
		//Vec.z += Mathf.PingPong(Time.time * speed, TargetPos.z);// + OriginPos.x; // Input.GetAxis("Horizontal") * Time.deltaTime * speed;
		//transform.position = Vec;


	}
}
