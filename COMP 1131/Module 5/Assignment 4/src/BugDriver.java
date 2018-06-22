/*Elvis Lam, T00610439
 * Comp 1131
 * Assignment 4
 * Question 1.	Design and implement a class called Bug, which represents a bug moving along a horizontal wire. The bug can only move in one direction for one unit of distance at a time. The bug can also turn to reverse direction. For your design, create a UML Class diagram similar to Figure 5.5 on page 180 of the textbook. 
 * Create a separate driver program that instantiates one or more Bug objects and demonstrates things like moving several times, then turning, then moving the same number of times (back to the original position).
Hint: Remember that a horizontal line has a zero position in the middle with positive to the right and negative to the left. Consider that a bug will land on the wire at some point before moving along the wire. Bug will require a toString method to return the current position along with which direction the bug is facing to the driver so it can be output.
 */
public class BugDriver {
	public static void main(String[] args) {
		
		
		//Demonstrate moving several times
		System.out.println("Moving several times\n----------------------------------");
		int bug1StartPosition = 0;
		int maxDistance1= 5 + bug1StartPosition;
		String bug1StartDirection = "right";
		Bug bug1 = new Bug(bug1StartPosition, bug1StartDirection);
		System.out.println("Start position: " + bug1StartPosition + " Facing: " + bug1StartDirection);
		for (int i = 0; i<maxDistance1;i++){ //Move
			bug1.move();
			System.out.println("Move to: " + bug1.getPosition() + " Facing: " + bug1.getDirection());
		}
		
		
		//Demonstrating turning
		System.out.println("\n\nTurning\n----------------------------------");
		int bug2StartPosition = 0;
		int maxDistance2= 3 + bug1StartPosition;
		String bug2StartDirection = "right";
		Bug bug2 = new Bug(bug1StartPosition, bug2StartDirection);
		System.out.println("Start position: " + bug2StartPosition + " Facing: " + bug1StartDirection);
		for (int i = 0; i<maxDistance2;i++){ //Move
			bug2.move();
			System.out.println("Move to: " + bug2.getPosition() + " Facing: " + bug2.getDirection());
		}
		bug2.turnAround(); //Initiate a turn
		System.out.println("turn around on " + bug2.getPosition() + " now facing: " + bug2.getDirection());
		for (int i = 0; i<2;i++){ //Move
			bug2.move();
			System.out.println("Move to: " + bug2.getPosition() + " Facing: " + bug2.getDirection());
		}
		bug2.turnAround(); //Initiate a turn
		System.out.println("turn around on " + bug2.getPosition() + " now facing: " + bug2.getDirection());
		for (int i = 0; i<2;i++){ //Move
			bug2.move();
			System.out.println("Move to: " + bug2.getPosition() + " Facing: " + bug2.getDirection());
		}
		
		
		//Demonstrating turning around back to original position
		System.out.println("\n\nMoving same number of times back to original position\n----------------------------------");
		int bug3StartPosition = 2;
		int maxDistance3 = 4 + bug3StartPosition;
		String bug3StartDirection = "left";
		Bug bug3 = new Bug(bug3StartPosition, bug3StartDirection);
		System.out.println("Start position: " + bug3StartPosition + " Facing: " + bug3StartDirection);
		for (int i = 0; i<maxDistance3;i++){ //Move
			bug3.move();
			System.out.println("Move to: " + bug3.getPosition() + " Facing: " + bug3.getDirection());
		}
		bug3.turnAround(); //Initiate a turn
		System.out.println("turn around on " + bug3.getPosition() + " now facing: " + bug2.getDirection());
		for (int i = 0; i<maxDistance3;i++){ //Move
			bug3.move();
			System.out.println("Move to: " + bug3.getPosition() + " Facing: " + bug3.getDirection());
		}
	}
}
