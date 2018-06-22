/*Elvis Lam
 * T00610439
 * Assignment 5
 * Question 2.	In Assignment 4, you created a Card class that represents a standard playing card. Use this to design and implement a class called DeckOfCards that stores 52 objects of the Card class. Include methods to shuffle the deck, deal a card, and report the number of cards left in the deck, and a toString to show the contents of the deck. The shuffle methods should assume a full deck. Document your design with a UML Class diagram. Create a separate driver class that first outputs the populated deck to prove it is complete, shuffles the deck, and then deals each card from a shuffled deck, displaying each card as it is dealt.
Hint: The constructor for DeckOfCards should have nested for loops for the face values (1 to 13) within the suit values (1 to 4). The shuffle method does not have to simulate how a deck is physically shuffled; you can achieve the same effect by repeatedly swapping pairs of cards chosen at random.
Testing: Include two complete runs to demonstrate the random effect of shuffling.
*/
public class DeckOfCardsDriver {
	public static void main(String[] args) {
		DeckOfCards deck1 = new DeckOfCards();
		
		//Output unshuffled deck
		System.out.print("Full Deck: \n" + deck1);
		
		//Shuffles Deck and outputs deck
		deck1.shuffle();
		System.out.print("\n\nShuffled Deck: \n" + deck1);
		
		//Deals Cards and outputs remaining number of cards
		int timesToDeal = 52;
		System.out.println("\n\nDealing: ");
		for (int i = 0; i <timesToDeal;i++){
			deck1.deal();
			System.out.print(deck1.cardDealt() +"|Cards left: "+ deck1.getCardsLeft()+ "\n");
		}
	}
}
