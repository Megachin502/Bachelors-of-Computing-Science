/*Elvis Lam
 * T00610439
 * Assignment 5
 * Question 3.	Design and implement a recursive program to determine and print up to the Nth line of Pascal’s Triangle, as shown below. Each interior value is the sum of the two values above it.
 */
import java.util.*;
public class PascalsTriangle {
	
	//Recursion: pascals triangle formula, calculates number given certain row and column
	static int pascal(int row, int column){
		if(column==row ||0==column){
			return 1;
		} else {
			return (pascal(row-1,column-1)+pascal(row-1,column));
		}
	}
	
	public static void main(String[] args) {
		int row = 0;
		Scanner scan = new Scanner(System.in);
		
		//Input number of desired rows
		System.out.print("Enter number of rows: ");
		row = scan.nextInt();
		String[] array = new String[row];
		
		//Fills the array
		for(int i = 0;i<row;i++){
			for(int j=0;j<i+1;j++){
				array[i] += String.valueOf(pascal(i,j)) + " ";
			}
		}
		
		//Outputs the array
		for(String i : array){
			System.out.println(i.replaceAll("null", ""));
		}
		
	}
}
