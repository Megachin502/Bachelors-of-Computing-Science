/*HiLoGame.java
 * 
 * Elvis Lam, T00610439
 * Comp 1131
 * Assignment 3
 * Question 1.	Design and implement an application that plays the Hi-Lo guessing game with numbers. The program should pick a random number between 1 and 100 (inclusive), then repeatedly prompt the user to guess the number. On each guess, report to the user that he or she is correct or that the guess is high or low. Continue accepting guesses until the user guesses correctly or chooses to quit. Count the number of guesses and report that value when the user guesses correctly. At the end of each game (by quitting or a correct guess), prompt to determine whether the user wants to play again. Continue playing games until the user chooses to stop.
Hint: This will require a nest of loops—the outer loop to play each game until the user stops and the inner loop to prompt the user for each guess.
Testing: Include exhibits that demonstrate all the program’s features: multiple completed games, a game quit in progress, and how an input out of range is handled.
 * */

import java.util.*;
public class HiLoGame {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		Random gen = new Random();
		int play = 1;
		int tries = 1;
		int number = gen.nextInt(100)+1;
		System.out.print("------------------------------[RULES]----------------------------------\n");
		System.out.println("The computer has chosen a random number between 1 and 100 (inclusive).");
		System.out.println("Try to guess the number, type 0 to quit the current game. " /*+ number*/);
		System.out.print("-----------------------------------------------------------------------\n\n");
		while (play == 1){ //Checks if user wants to continue playing
			System.out.print("Guess: ");
			int guess = scan.nextInt();
			//Checks if the guess is valid
			while (guess <0 || guess >100){
				System.out.print("[Guess out of bounds, must be between 1 and 100 (inclusive)]\n");
				System.out.print("Guess: ");
				guess = scan.nextInt();
			}
			if (guess != number && guess != 0){
				tries++;
				//Checks how close the guess is away from the number, if the guess is below the number then output low, if guess is higher than number output high
				String closeness = null;
				if (guess>number){
					closeness = "high";
				} else if (guess<number) {
					closeness = "low";
				}
				System.out.print("[Incorrect - Guess is " + closeness + " - Tries: " + (tries-1) + "]\n");
			} else {
				//Checks if the guess is correct, if it is then it prompts user if it wants to replay
				if (guess == number) {
					System.out.print("[Correct! - That took " + tries + " tries]~~\n");
				//Checks if the user wants to quit the current game
				} else if (guess == 0) {
					System.out.print("\n--------------------[YOU QUIT THE CURRENT GAME]------------------------\n");
				}
				//Ask whether or not the user wants to play again or stop
				System.out.print("\nType 1 to play again or 0 to stop: ");
				play = scan.nextInt();
				if (play == 1){
					System.out.print("----------------------------NEW GAME----------------------------------\n");
				//Checks if user wants to end the program
				} else if (play == 0){
					System.out.print("\n----------------------------HAVE A GOOD DAY----------------------------------\n");
					System.exit(0);
				}
				//Checks if valid input, if not then it will repeat till the input is valid
				while (play >1 || play <0){
					System.out.print("Type 1 to play again or 0 to stop: ");
					play = scan.nextInt();
					if (play == 1){
						System.out.print("----------------------------NEW GAME----------------------------------\n");
					} else if (play == 0) {
						System.out.print("\n----------------------------HAVE A GOOD DAY----------------------------------\n");
						System.exit(0);
					}
				}
				//Chooses new random number for next game
				number = gen.nextInt(100)+1;
				/*System.out.print(number);*/
				
				//Resets tries counter
				tries = 1;
			} 
		}
	}
}
