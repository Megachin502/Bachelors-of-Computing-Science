/*Write an application that prompts for and reads the numerator and denominator of a fraction as integers, then displays the decimal equivalent of the fraction.
Hint: This requires casting from integer to double before dividing.
Testing: Submit testing exhibits using the following inputs:
1, 2 giving 0.5; 3, 8 giving 0.375; 2, 3 giving 0.666...
*/

import java.util.Scanner;
public class FractionToInterger {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		//Takes in users numerator
		int numerator=0;
		System.out.print("Input numerator: ");
		numerator = scan.nextInt();
		
		//Takes in users denominator
		int denominator=0;
		System.out.print("Input denominator: ");
		denominator = scan.nextInt();
		
		//Converts fraction to integer
		float interger=(float)numerator/denominator;
		System.out.println("Interger: " + interger);
	}
}
