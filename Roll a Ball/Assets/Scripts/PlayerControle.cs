using UnityEngine;
using UnityEngine.UI;
using System.Collections;


public class PlayerControle : MonoBehaviour {

	public float speed;
	public Text countText,winText;


	private Rigidbody rb;
	public static int count; 
	public int lvlCount;

	// Use this for initialization
	void Start () {
		rb = GetComponent<Rigidbody>();
		count = 0; 
		SetCountText(); 
		winText.text = "";
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	// Update before fisics calculations
	void FixedUpdate () {
		float moveHorizontal = Input.GetAxis ("Horizontal");
		float moveVertical = Input.GetAxis ("Vertical");

		Vector3 movement = new Vector3 (moveHorizontal, 0.0f, moveVertical);

		rb.AddForce (movement * speed);
	}

	void OnTriggerEnter(Collider other)
	{
		if (other.gameObject.CompareTag("Pick Up"))
		{
			other.gameObject.SetActive (false);
			count = count + 1;
			SetCountText();
		}

	}

	void SetCountText()
	{
		countText.text = "Count: " + count.ToString();
		if (count >= lvlCount)
		{
			winText.text = "You win";
		}
	}

}
