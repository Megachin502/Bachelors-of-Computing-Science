/*2.	Design and implement a class called Card that represents a standard playing card. Each card has a suit and face value. For your design, create a UML Class diagram similar to Figure 5.5 on page 180 of the textbook. Create a separate driver program that deals five random cards, then two specific cards that you choose. It is not necessary to ensure the cards being output are unique.
Hint: Represent the faces Ace thru King as 1 thru 13 and the suits as 1 thru 4. You need two constructors: one that receives a suit and face value as parameters, plus the default constructor where these values are randomly generated. The face and suit must have appropriate get_ and set_ methods for the numeric values, plus a get_ for the textual equivalent (e.g. getFace() might return 13 while getFaceText() would return King). Your toString method should return a nice representation of the values like “Ace of Spades.”
*/
import java.util.*;
public class Card {
	private Random rand = new Random();
	private int suitNum = 0;
	private int faceNum = 0;
	
	public Card(int faceNum, int suitNum){
		setSuit(this.suitNum = suitNum); //this.suitNum = rand.nextInt(4)+1
		setFace(this.faceNum = faceNum);//this.faceNum = rand.nextInt(13)+1
	}
	
	public String setSuit(int value){
		String suit = null;
		switch (value){
		case 1:
			suit = "Clubs";
			break;
		case 2:
			suit = "Diamonds";
			break;
		case 3:
			suit = "Hearts";
			break;
		case 4:
			suit = "Spades";
			break;
		}
		return suit;
	}
	
	public String setFace(int value){
		String face = null;
		switch (value){
		case 1:
			face = "Ace";
			break;
		case 2:
			face = "Two";
			break;
		case 3:
			face = "Three";
			break;
		case 4:
			face = "Four";
			break;
		case 5:
			face = "Five";
			break;
		case 6:
			face = "Six";
			break;
		case 7:
			face = "Seven";
			break;
		case 8:
			face = "Eight";
			break;
		case 9:
			face = "Nine";
			break;
		case 10:
			face = "Ten";
			break;
		case 11:
			face = "Jack";
			break;
		case 12:
			face = "Queen";
			break;
		case 13:
			face = "King";
			break;
		}
		return face;
	}
	
	public int getSuit(){
		return suitNum;
	}
	public int getFace(){
		return faceNum;
	}
	public String getSuitText(){
		return setSuit(suitNum);
	}
	public String getFaceText(){
		return setFace(faceNum);
	}
	public String toString(){
		return (getFaceText()+" of " +getSuitText());
	}
}
