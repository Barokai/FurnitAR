using UnityEngine;

public class AudioTest : MonoBehaviour
{
	public AudioClip myAudio;
	AudioSource audioS;

	// Start is called before the first frame update
	void Start()
	{
		audioS = GetComponent<AudioSource>(); // AudioSource needs to be on the gameobject!
		audioS.PlayOneShot(myAudio, 0.5F);
	}

	// Update is called once per frame
	void Update()
	{
	}
}
