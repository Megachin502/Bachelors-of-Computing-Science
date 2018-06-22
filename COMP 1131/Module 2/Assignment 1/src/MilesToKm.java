/*Write an application that converts miles into kilometers (one mile equals 1.60935 kilometers).  Read the miles value from the user as a floating point value and report the equivalent amount in kilometers.
Hint: You should treat the conversion value of 1.60935 like the values in the TempConverter.java example.
Testing: Submit testing exhibits using the following inputs: 0, 1, 100, 0.5, and 123.45.
*/

import java.util.Scanner;
public class MilesToKm {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		final float MILES_IN_KILOMETERS=1.60935f;
		
		//Takes in users miles
		System.out.print("Input miles: ");
		float miles = 0;
		miles = scan.nextFloat();
		
		//Conversion for miles to kilometers
		float kilometers = miles*MILES_IN_KILOMETERS;
		System.out.print("Kilometers: " + kilometers);
	}
}
