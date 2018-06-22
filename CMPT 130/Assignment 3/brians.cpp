#include <iostream>
using namespace std;

int main()
{
    // Randomize
    srand(time(nullptr));

    int numDice = 0;
    // num dice is invalid read in a new number
    while( numDice <= 0 ) {
        cout << "Enter the number of dice to roll: " << endl;
        cin >> numDice;

        if( numDice <= 0 ) {
            cout << "Invalid number of dice!\n";
        }
    }

    // Roll the dice
    int numDiceRolled = 0;
    int sum = 0;
    while (numDiceRolled < numDice) {
        int roll = rand() % 6 + 1;
        sum += roll;
        cout << "Rolling " << numDiceRolled + 1 << " of "<< numDice << " = " << roll << endl;
        numDiceRolled++;
    }
    cout << "Sum: " << sum << endl;
    return 0;
}