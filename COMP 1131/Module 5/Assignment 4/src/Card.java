/*Elvis Lam, T00610439
 * Comp 1131
 * Assignment 4
 * Question 2.	Design and implement a class called Card that represents a standard playing card. Each card has a suit and face value. For your design, create a UML Class diagram similar to Figure 5.5 on page 180 of the textbook. Create a separate driver program that deals five random cards, then two specific cards that you choose. It is not necessary to ensure the cards being output are unique.
Hint: Represent the faces Ace thru King as 1 thru 13 and the suits as 1 thru 4. You need two constructors: one that receives a suit and face value as parameters, plus the default constructor where these values are randomly generated. The face and suit must have appropriate get_ and set_ methods for the numeric values, plus a get_ for the textual equivalent (e.g. getFace() might return 13 while getFaceText() would return King). Your toString method should return a nice representation of the values like “Ace of Spades.”
 */
public class Card {
	public enum Suits {Spades, Hearts, Diamonds, Clubs}
	public Suits suit;
	public enum Faces {Ace, Two, Three, Four, Five, Six, Seven, Eight, Nine, Ten, Jack, Queen, King}
	public Faces face;
	
	
	//Passes 2 arguments into and picks card
	public void setCard(int suitNum, int faceNum){
		//Sets suit
		if (suitNum == 1){
			suit = Suits.Spades;
		} else if (suitNum == 2) {
			suit = Suits.Hearts;
		} else if (suitNum == 3){
			suit = Suits.Diamonds;
		} else{
			suit = Suits.Clubs;
		}
		
		//Sets face
		if (faceNum == 1){
			face = Faces.Ace;
		} else if (faceNum == 2){
			face = Faces.Two;
		} else if (faceNum == 3){
			face = Faces.Three;
		} else if (faceNum == 4){
			face = Faces.Four;
		} else if (faceNum == 5){
			face = Faces.Five;
		} else if (faceNum == 6){
			face = Faces.Six;
		} else if (faceNum == 7){
			face = Faces.Seven;
		} else if (faceNum == 8){
			face = Faces.Eight;
		} else if (faceNum == 9){
			face = Faces.Nine;
		} else if (faceNum == 10){
			face = Faces.Ten;
		} else if (faceNum == 11){
			face = Faces.Jack;
		} else if (faceNum == 12){
			face = Faces.Queen;
		} else if (faceNum == 13){
			face = Faces.King;
		}
	}
	
	//Get suits number
	public int getSuit(){
		return suit.ordinal()+1;
	}
	//Get face number
	public int getFace(){
		return face.ordinal()+1;
	}
	
	//Get suit text
	public String getSuitText(){
		return suit.name();
	}
	//Get face test
	public String getFaceText(){
		return face.name();
	}
	
	//Returns nice representation of cards
	public String toString(){
		return (getFaceText() + " of "+ getSuitText());
	}
	
}
