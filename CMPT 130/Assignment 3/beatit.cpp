#include <iostream>
#include <cstdlib>
#include <ctime>
#include "ansiicodes.h"
using namespace std;
int main(){
    cout << "********************************************\n" << "Welcome to Roller's Un-Random house of dice!\n" << "********************************************\n";
    cout << "What is your first name? ";
    string name;
    cin >> name;
    cout << "Would you like to pick an un-random game, or let the timer pick?\n";
    cout << "Enter 0 for timer, or pick your own un-random game: ";
    int numberForSeed=0;
    cin >> numberForSeed;
    if(numberForSeed==0){
        srand(time(0));
        cout << "THE TIMER! A daring choice!\n";
    }else {
        srand(numberForSeed);
        cout << numberForSeed << "!" << " A wise and safe choice.\n";
    }
    cout << "What would you like to be the maximum bet? :";
    int maxBet=0;
    cin >> maxBet;
    while (maxBet<=0){
        cout << ANSII_RED <<"The maximum bet must be greater than or equal to 1.\n" << ANSII_NORMAL;
        cout << "What would you like to be the maximum bet? :";
        cin >> maxBet;
    }
    int rounds=1;
    int currentScore=50;
    while (currentScore>0 && currentScore<100){
        cout << "\nRound " << rounds << " You have "<< ANSII_MAGENTA << currentScore << ANSII_NORMAL << " points.\n";
        int roll1=(rand()%6)+1;
        int roll2=(rand()%6)+1;
        int roll3=(rand()%6)+1;
        int roll4=(rand()%6)+1;
        int sumDealer=roll1+roll2;
        int sumPlayer=roll3+roll4;
        cout << "Dealer rolls: " << roll1 << " + " << roll2 << " = " << ANSII_MAGENTA <<sumDealer << ANSII_NORMAL <<"           Enter your bet: ";
        int bet=0;
        cin >> bet;
        while(bet>maxBet || bet>currentScore || bet<=0){
            if(bet>maxBet){
                cout << ANSII_RED << "You must not bet more than the maximum bet (" << maxBet << "): " << ANSII_NORMAL;
                cin >> bet;
            }else if(bet>currentScore){
                cout << ANSII_RED << "You must not bet more than your current score (" << currentScore << "): " << ANSII_NORMAL;
                cin >> bet;
            }else if(bet<=0){
                cout << ANSII_RED << "You must bet at least 1: " << ANSII_NORMAL;
                cin >> bet;
            }
        }
        cout << "You roll:     " << roll3 << " + " << roll4 << " = " << ANSII_MAGENTA <<sumPlayer << ANSII_NORMAL <<"." << endl;
        if(sumPlayer>sumDealer){
            cout << ANSII_GREEN << name << ", you won! :-)" << ANSII_NORMAL;
            currentScore=currentScore+bet;
        }else if(sumPlayer<sumDealer){
            cout << ANSII_RED << name << ", you lost. :-(" << ANSII_NORMAL;
            currentScore=currentScore-bet;
        }else{
            cout << name << ", you tied. ???WTF";
        }
        cout << "\nCurrent score: " << currentScore << "." << endl;
        rounds++;
    }
    if (currentScore>=100){
        cout << ANSII_GREEN << ANSII_BOLD << "Congratulations " << name << " You win the game with a score of " << currentScore << "." << ANSII_NORMAL;
    }else{
        cout << ANSII_RED << ANSII_BOLD << "I'm sorry, " << name << " you are out of points so you lose." << ANSII_NORMAL;
    }
}