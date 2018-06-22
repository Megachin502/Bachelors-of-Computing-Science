/*Elvis Lam
 * T00610439
 * Assignment 5
 * Question 1.	Design and implement a class called RandomArray, which has an integer array. The constructor receives the size of the array to be allocated, then populates the array with random numbers from the range 0 through the size of the array. Methods are required that return the minimum value, maximum value, average value, and a String representation of the array values. Document your design with a UML Class diagram. Create a separate driver class that instantiates a RandomArray object and outputs its contents and the minimum, maximum, and average values.
Testing: Include the output for several different test runs that shows the array contents with its minimum, maximum, and average values.
*/
import java.util.*;
public class RandomArray {
	private int receivedNum=0;
	private int[] array;
	private Random rand = new Random();
	
	//Populates array
	public RandomArray(int num){
		array = new int[num];
		receivedNum=num;
		for (int i=0;i<receivedNum;i++){
			array[i]=rand.nextInt(receivedNum)+1;
		}
	}
	
	//Finds the min value
	public int minValue(){
		int min=array[0];
		for (int i=0;i<receivedNum;i++){
			if (min>array[i]){
				min=array[i];
			}
		}
		return min;
	}
	
	//Finds the max value 
	public int maxValue(){
		int max=array[0];
		for (int i=0;i<receivedNum;i++){
			if (max<array[i]){
				max=array[i];
			}
		}
		return max;
	}
	
	//Finds the average
	public double average(){
		double sum=0.0;
		for(int i=0;i<receivedNum;i++){
			sum+=array[i];
		}
		return sum/receivedNum;
	}
	
	//Prints randomly generated array, min value, max value, average
	public String toString(){
		return ("Random Array: "+Arrays.toString(array)) +"\nMin Value: "+ minValue()+"\nMax Value: "+ maxValue()+"\nAverage: "+ average();
	}
}
