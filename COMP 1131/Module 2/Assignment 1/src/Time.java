/*Write an application that reads a value representing a number of seconds, then displays the equivalent amount of time as a combination of hours, minutes, and seconds. For example, 9999 seconds is equivalent to 2 hours, 46 minutes, and 39 seconds.
Hint: This requires using the % modulus operator. The trick with multiple units of measure like this is to start with the largest unit (hours) and work down.
Testing: Submit testing exhibits using the following inputs: 0, 60, 3600, and 9999.
*/

import java.util.Scanner;
public class Time {
	public static void main(String[] args) {
		final int SECONDS_IN_HOUR = 3600;
		final int SECONDS_IN_MINUTE = 60;
		
		
		//Takes in users seconds
		System.out.print("Input seconds: ");
		int seconds = 0;
		Scanner scan = new Scanner(System.in);
		seconds = scan.nextInt();
		
		//Converts to hours
		int hours = seconds/SECONDS_IN_HOUR;
		System.out.print(hours + " hours, ");
		
		//Converts to minutes
		int minutes=(seconds%SECONDS_IN_HOUR)/SECONDS_IN_MINUTE;
		System.out.print(minutes + " minutes, ");
		
		//Converts to seconds remaining
		int secondsRemaining = (seconds%SECONDS_IN_HOUR)%SECONDS_IN_MINUTE;
		System.out.print("and " + secondsRemaining + " seconds.");
	}
}
