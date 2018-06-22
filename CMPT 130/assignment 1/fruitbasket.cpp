/*Elvis Lam
  301285572
  ela46@sfu.ca*/

#include <iostream>
#include "ansiicodes.h"
#include <iomanip>
using namespace std;
int main(){
cout << ANSII_BOLD << ANSII_GREEN << "**************************\n" << "Local Fruit Box Calculator\n" << "**************************\n" << ANSII_NORMAL <<endl;

    //Input number of apples donated
    int applesDonated;
    cout << "Enter the number of" << ANSII_RED << " apples donated: " << ANSII_NORMAL;
    cin >> applesDonated;

    //Input  number of oranges donated
    int orangesDonated;
    cout << "Enter the number of" << ANSII_RED << " oranges donated: " << ANSII_NORMAL;
    cin >> orangesDonated;

    //Input the required number of fruit pieces per basket
    int fruitPiecesPerBasket;
    cout << "Enter the number of" << ANSII_RED << " fruit pieces per basket: " << ANSII_NORMAL;
    cin >> fruitPiecesPerBasket;

    //Output input values (applesDonated, orangesDonated, fruitPiecesPerBasket)
    cout << ANSII_BOLD << ANSII_GREEN << "\nInput Values:\n" << "-------------\n" << ANSII_NORMAL
         << "# Apples Donated:           " << ANSII_RED << setw(4) << applesDonated << ANSII_NORMAL
         << "\n# Oranges Donated:          " << ANSII_RED << setw(4) << orangesDonated << ANSII_NORMAL
         << "\n# Fruit Pieces per Basket:  " << ANSII_RED << setw(4) << fruitPiecesPerBasket << ANSII_NORMAL;

    //Calculate total number of baskets possible to create using the donated fruit, each containing exactly the required number of pieces of fruit
    cout << ANSII_BOLD << ANSII_GREEN << "\n\nBasket Creation Numbers:\n" << "------------------------\n" << ANSII_NORMAL;
    int basketsToCreate=(applesDonated+orangesDonated)/fruitPiecesPerBasket;
    cout << "# Baskets to create:       " << ANSII_RED << setw(4) << basketsToCreate << ANSII_NORMAL;

    //Calculate Minimum number of apples per basket. This is, if the apples were split evenly amongst the basketsToCreate, at least how many apples are there per basket?
    int minimumNumberofApplesPerBasket=applesDonated/basketsToCreate;
    cout << "\nMin # apples per basket:   " << ANSII_RED << setw(4) << minimumNumberofApplesPerBasket << ANSII_NORMAL;

    //Calculate Minimum number of oranges per basket
    int minimumNumberofOrangesPerBasket=orangesDonated/basketsToCreate;
    cout << "\nMin # oranges per basket:  " << ANSII_RED  << setw(4) << minimumNumberofOrangesPerBasket << ANSII_NORMAL;

    //Once created, each basket will be tied off with three pieces of ribbon per basket. Calculate the total number of pieces of ribbon required
    int ribbonsRequired=basketsToCreate*3;
    cout << "\n# Ribbions to tie baskets: " << ANSII_RED << setw(4) << ribbonsRequired << ANSII_NORMAL;

    //Output Number of pieces of fruit required to make one more basket.
    int fruitRequiredtoMakeOneMoreBasket=fruitPiecesPerBasket-((applesDonated+orangesDonated)%fruitPiecesPerBasket);
    cout << "\n# Pieces needed to complete one more basket: " << ANSII_RED << setw(4) << fruitRequiredtoMakeOneMoreBasket << ANSII_NORMAL <<  endl;

    return 0;
}
  
