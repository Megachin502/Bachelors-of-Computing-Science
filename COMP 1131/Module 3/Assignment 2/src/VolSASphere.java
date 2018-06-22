/*VolSASphere.java
 * 
 * Elvis Lam, T00610439
 * Comp 1131
 * Assignment 2, Question 3
 
Write an application that reads the radius of a sphere and prints its volume and surface area. Use the following formulas, in which r represents the sphere’s radius. Print the output to four decimal places.
Volume = 4/3 π r3
Surface Area = 4 π r2
Hint: Section 3.5 of the textbook describes the many methods of the Math class and how they are used. The Math class also contains pre-defined constants like π. Search on the web for how you can use these.
Testing: Include test exhibits for inputs that you choose. Make sure you check the results with a calculator!

 * */

import java.util.Scanner; 
import java.text.DecimalFormat;
public class VolSASphere {

	public static void main(String[] args) {
		Scanner scan = new Scanner (System.in);
		DecimalFormat fmt = new DecimalFormat ("0.####");
		
		//Input radius
		System.out.print("Input radius of sphere: ");
		double radius = scan.nextDouble();
		
		//Calculate volume
		double volume = (4*Math.PI/3)*Math.pow(radius, 3);
		System.out.println("Volume: " + fmt.format(volume));
		
		//Calculate surface area
		double surfaceArea = 4*Math.PI*Math.pow(radius, 2);
		System.out.print("Surface area: " + fmt.format(surfaceArea));
	}

}
