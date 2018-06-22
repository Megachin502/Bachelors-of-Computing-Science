#pragma config(Sensor, S3,     lightsensor,    sensorEV3_Color)
#pragma config(Sensor, S4,     distancesensor, sensorEV3_Ultrasonic)
#pragma config(Motor,  motorB,          motor1,        tmotorEV3_Large, PIDControl, encoder)
#pragma config(Motor,  motorC,          motor2,        tmotorEV3_Large, PIDControl, encoder)

// Change these values
int startRow = 0
int startCol = 0

int visited = 1;
int notVisited = 0;

int endRow = 4
int endCol = 6

typedef struct Cell{
	bool Visited;
	int NorthWall;
	int EastWall;
	int SouthWall;
	int WestWall;
}Cell;

task main()
{
	// 1: Robot has visited this cell
	// 0: Robot has not visited this cell
	Cell grid[4][6] = {0};

	grid[4][2].NorthWall



	// Set starting position to 1
	grid[startRow][startCol] = visited;

	int startGridx=1
	int startGridy=2




}
