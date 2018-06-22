/*Elvis Lam
 * T00610439
 * Assignment 5
 * Question 2.	In Assignment 4, you created a Card class that represents a standard playing card. Use this to design and implement a class called DeckOfCards that stores 52 objects of the Card class. Include methods to shuffle the deck, deal a card, and report the number of cards left in the deck, and a toString to show the contents of the deck. The shuffle methods should assume a full deck. Document your design with a UML Class diagram. Create a separate driver class that first outputs the populated deck to prove it is complete, shuffles the deck, and then deals each card from a shuffled deck, displaying each card as it is dealt.
Hint: The constructor for DeckOfCards should have nested for loops for the face values (1 to 13) within the suit values (1 to 4). The shuffle method does not have to simulate how a deck is physically shuffled; you can achieve the same effect by repeatedly swapping pairs of cards chosen at random.
Testing: Include two complete runs to demonstrate the random effect of shuffling.
*/
import java.util.*;
public class DeckOfCards {
	private Card[] Deck = new Card[52];
	Random rand = new Random();
	private int cardsLeft = 52;
	private Card cardDealt = null;
	private int cardDealCounter = 0;
	
	//Constructor sets up the deck
	public DeckOfCards(){
		int faceCounter = 1;
		int suitCounter = 1;
		for (int i = 0; i<52; i ++){
			Deck[i]=new Card(faceCounter, suitCounter);
			faceCounter++;
			if (faceCounter == 14){ //sets limit for face and suit while in 52 iteration for loop
				faceCounter = 1; //Resets to begin on new suit
				suitCounter++; //Increments suitCounter so that when face reaches 14, it moves onto next suit to fill
			}
		}
	}
	
	//Shuffles the deck 100 times, swaping random cards with eachother
	public void shuffle(){
		for (int i = 0; i <100;i++){
			int x = rand.nextInt(52);
			int y = rand.nextInt(52);
			Card temp = Deck[x]; //Created a temp so we don't lose Deck at x
			Deck[x]=Deck[y];
			Deck[y]=temp;
		}	
	}
	//Deals first card in the deck (first element in array)
	public void deal(){
		cardDealt = Deck[cardDealCounter];
		//Deck[cardDealCounter] = null;
		cardsLeft--; //Decrements from 52
		cardDealCounter++; //Sets up for next dealing if we want to deal again
	}
	
	//Returns the card that was dealt
	public Card cardDealt(){
		return (cardDealt);
	}
	
	//Returns cards left after dealing
	public int getCardsLeft(){
		return cardsLeft;
	}
	
	//Returns array of deck
	public String toString(){
		return Arrays.toString(Deck);
	}

}
