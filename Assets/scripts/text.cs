using UnityEngine;


public class text : MonoBehaviour
{
	public UnityEngine.UI.Text displayedText;
	// Start is called before the first frame update
	void Start()
	{
		displayedText.text = "Hello World from c#";
	}

	// Update is called once per frame
	void Update()
	{
		int fingerCount = 0;
		foreach (var touch in Input.touches)
		{
			if (touch.phase != TouchPhase.Ended && touch.phase != TouchPhase.Canceled) {
				fingerCount++;
			}

			displayedText.text = $"{fingerCount} finger(s)";
			displayedText.fontSize += fingerCount*2;
		}
	}
}
