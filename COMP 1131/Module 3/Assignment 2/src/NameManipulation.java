/*NameManipulation.java
 * 
 * Elvis Lam, T00610439
 * Comp 1131
 * Assignment 2, Question 1
 
Write an application that prompts for and reads the user’s first and last name (separately), then displays a string composed of the first letter of the user’s first name, followed by the first five characters of the user’s last name, followed by a random number in the range of 10 to 99. Assume that the last name is at least five letters long. Similar algorithms are sometimes used to generate usernames for new computer accounts.
Testing: If the inputs were “Michael” and “Jackson,” the output should look like “MJacks42.” Include several tests with different inputs.
 * */

import java.util.*;
public class NameManipulation {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		//Input first name
		System.out.print("Input first name: ");
		String firstName = scan.next();
		
		//Input last name
		System.out.print("Input last name: ");
		String lastName = scan.next();
		
		//Manipulates name
		System.out.print("Manipulated name: ");
		Random generator = new Random();
		
		String manipulatedName  = firstName.charAt(0) + lastName.substring(0,5) + (generator.nextInt(90) + 10); //(0 to 89) plus 10
		System.out.println(manipulatedName);
	}
}
