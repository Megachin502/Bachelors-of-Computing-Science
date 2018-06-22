/*Elvis Lam, T00610439
 * Comp 1131
 * Assignment 4
 * Question 2.	Design and implement a class called Card that represents a standard playing card. Each card has a suit and face value. For your design, create a UML Class diagram similar to Figure 5.5 on page 180 of the textbook. Create a separate driver program that deals five random cards, then two specific cards that you choose. It is not necessary to ensure the cards being output are unique.
Hint: Represent the faces Ace thru King as 1 thru 13 and the suits as 1 thru 4. You need two constructors: one that receives a suit and face value as parameters, plus the default constructor where these values are randomly generated. The face and suit must have appropriate get_ and set_ methods for the numeric values, plus a get_ for the textual equivalent (e.g. getFace() might return 13 while getFaceText() would return King). Your toString method should return a nice representation of the values like “Ace of Spades.”
 */
import java.util.Random;
public class CardDriver {

	public static void main(String[] args) {
		Card card1 = new Card();
		Random gen = new Random();
		
		//Five Random Cards
		System.out.println("Random Cards\n---------------");
		for(int i = 0; i<5;i++){
			card1.setCard(gen.nextInt(4)+1, gen.nextInt(13)+1);
			System.out.print(card1.getFaceText() + " of "+ card1.getSuitText());
			System.out.println(" = Number Equvialent: "+ card1.getFace() + " of "+ card1.getSuit());
		}
		
		
		//Two cards I choose
		System.out.println("\n\nCards I choose\n---------------");
		card1.setCard(2, 4); //4 of hearts
		System.out.print(card1.getFaceText() + " of "+ card1.getSuitText());
		System.out.println(" = Number Equvialent: "+ card1.getFace() + " of "+ card1.getSuit());
		card1.setCard(4, 12); //Queen of clubs
		System.out.print(card1.getFaceText() + " of "+ card1.getSuitText());
		System.out.println(" = Number Equvialent: "+ card1.getFace() + " of "+ card1.getSuit());
		
	}
}
