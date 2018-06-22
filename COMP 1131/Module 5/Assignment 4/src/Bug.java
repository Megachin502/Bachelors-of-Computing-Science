/*Elvis Lam, T00610439
 * Comp 1131
 * Assignment 4
 * Question 1.	Design and implement a class called Bug, which represents a bug moving along a horizontal wire. The bug can only move in one direction for one unit of distance at a time. The bug can also turn to reverse direction. For your design, create a UML Class diagram similar to Figure 5.5 on page 180 of the textbook. 
 * Create a separate driver program that instantiates one or more Bug objects and demonstrates things like moving several times, then turning, then moving the same number of times (back to the original position).
Hint: Remember that a horizontal line has a zero position in the middle with positive to the right and negative to the left. Consider that a bug will land on the wire at some point before moving along the wire. Bug will require a toString method to return the current position along with which direction the bug is facing to the driver so it can be output.
 */

public class Bug {
	public int position = 0;
	public String direction;
	
	//Takes in initial position of bug
	public Bug(int position, String direction){
		this.position=position;
		this.direction=direction.toLowerCase();
	}
	
	//Moves depending on direction facing
	public void move(){
		if(direction.equals("left")){
			this.position--;
		} else {
			this.position++;
		}
	}
	
	//Flips direction
	public void turnAround(){
		if (this.direction=="left"){
			this.direction="right";
		} else {
			this.direction="left";
		}
	}
	
	//Get current position of bug
	public int getPosition(){
		return this.position;
	}
	
	//Get current direction of bug
	public String getDirection(){
		return this.direction;
	}
	
}
