/*XYDistanceCalc.java
 * 
 * Elvis Lam, T00610439
 * Comp 1131
 * Assignment 2, Question 2
 
Write an application that reads the (x,y) coordinates for two points. This should prompt for and read each of the four values individually. Compute the distance between the two points using the following formula: Distance = (distance formula)

Testing: Include test exhibits for the following inputs:
(1, 2) and (1, 2) are distance 0
(4, 0) and (2, 0) are distance 2
(0, 0) and (3, 4) are distance 5
(0, 0) and (1, 1) are distance 1.414... (i.e. the square root of 2)

 * */
import java.util.Scanner;
public class XYDistanceCalc {
	public static void main (String [] args){
		Scanner scan = new Scanner(System.in);
		
		//Input first x and y coordinates
		System.out.print("Input first x coordinate: ");
		int x1 = scan.nextInt();
		System.out.print("Input first y coordinate: ");
		int y1 = scan.nextInt();
		
		//Input second x any y coordinates
		System.out.print("Input second x coordinate: ");
		int x2 = scan.nextInt();
		System.out.print("Input second y coordinate: ");
		int y2 = scan.nextInt();
		
		//Calculate distance
		double distance = Math.sqrt(Math.pow(x2-x1, 2) + Math.pow(y2-y1, 2));
		System.out.println("Distance between the two points: " + "(" + x1 + "," + y1 + ") and (" + x2 + "," + y2 + ") are distance " + distance);
		
	}
}
