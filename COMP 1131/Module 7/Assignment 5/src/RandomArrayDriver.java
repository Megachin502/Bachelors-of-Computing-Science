/*Elvis Lam
 * T00610439
 * Assignment 5
 * Question 1.	Design and implement a class called RandomArray, which has an integer array. The constructor receives the size of the array to be allocated, then populates the array with random numbers from the range 0 through the size of the array. Methods are required that return the minimum value, maximum value, average value, and a String representation of the array values. Document your design with a UML Class diagram. Create a separate driver class that instantiates a RandomArray object and outputs its contents and the minimum, maximum, and average values.
Testing: Include the output for several different test runs that shows the array contents with its minimum, maximum, and average values.
*/
public class RandomArrayDriver {
	public static void main(String[] args) {
		//Array of 2
		RandomArray test1 = new RandomArray(2);
		System.out.println(test1);
		System.out.println();
		
		//Array of 5
		RandomArray test2 = new RandomArray(5);
		System.out.println(test2);
		System.out.println();
		
		//Array of 9
		RandomArray test3 = new RandomArray(9);
		System.out.println(test3);
		System.out.println();
		
		//Array of 24
		RandomArray test4 = new RandomArray(24);
		System.out.println(test4);
		System.out.println();
	}
}
