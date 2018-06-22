/*Elvis lam
 * 301285572
 * ela46@sfu.ca*/

#include <iostream>;
#include <fstream>;
using namespace std;
int main(){

    //Input age, name of habit, cost of habit per day
    int age;
    string habit;
    double habitCostPerDay;
    cout << "How old are you? ";
    cin >> age;
    cout << "What is your habit (one word)? ";
    cin >> habit;
    cout << "How many $ per day does your habit cost? ";
    cin >> habitCostPerDay;

    //Calculations+output: yearsCost, cost between maxAge(90) and now, movie=$11
    const int DAYS_IN_A_YEAR=365;
    double yearsCost=habitCostPerDay*DAYS_IN_A_YEAR;
    const int MAX_AGE=90;
    double costFromAgeToMaxAge=(MAX_AGE-age)*yearsCost;
    const int COST_FOR_ONE_MOVIE=11;
    int numberOfFreeMovies=costFromAgeToMaxAge/COST_FOR_ONE_MOVIE;
    cout << "\nThis year your " << habit << " habit will cost you $" << yearsCost << ".\n";
    cout << "Between now and when you are " << MAX_AGE << ", it will cost you $" << costFromAgeToMaxAge << "!\n";
    cout << "That's " << numberOfFreeMovies << " \"free\" movies by when you are " << MAX_AGE << "!";

    return 0;
}
