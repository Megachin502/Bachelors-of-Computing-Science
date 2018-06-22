#include <iostream>
#include <cstdlib>
#include <ctime>
#include "ansiicodes.h"
using namespace std;
void displayWelcome();
string getUserName();
void seedGame();
int getRandomRoll();
int getMaxBet();
int getUserBet(int currentScore_par, int maxBet_par);
int main(){
    //Output welcome
    displayWelcome();
    //Input name
    string name = getUserName();
    //Input seed
    seedGame();
    cout << endl;
    //Input maxBet
    int maxBet=getMaxBet();
    //Play the game
    int rounds=1;
    int currentScore=50;
    while (currentScore>0 && currentScore<100){
        cout << "\nRound " << rounds << " You have "<< ANSII_MAGENTA << currentScore << ANSII_NORMAL << " points.\n";
        //State random rolls for addition
        int roll1=getRandomRoll();
        int roll2=getRandomRoll();
        int roll3=getRandomRoll();
        int roll4=getRandomRoll();
        int sumDealer=roll1+roll2;
        int sumPlayer=roll3+roll4;
        //Start rolling
        cout << "Dealer rolls: " << roll1 << " + " << roll2 << " = " << ANSII_MAGENTA <<sumDealer << ANSII_NORMAL;
        int bet = getUserBet(currentScore,maxBet);
        cout << "You roll:     " << roll3 << " + " << roll4 << " = " << ANSII_MAGENTA <<sumPlayer << ANSII_NORMAL <<"." << endl;
        //Check to see win/lose
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
    //End results
    if (currentScore>=100){
        cout << ANSII_GREEN << ANSII_BOLD << "Congratulations " << name << " You win the game with a score of " << currentScore << "." << ANSII_NORMAL;
    }else{
        cout << ANSII_RED << ANSII_BOLD << "I'm sorry, " << name << " you are out of points so you lose." << ANSII_NORMAL;
    }
}
void displayWelcome(){
    cout << "********************************************\n" << "Welcome to Roller's Un-Random house of dice!\n" << "********************************************\n";
}
string getUserName(){
    cout << "What is your first name? ";
    string name;
    cin >> name;
    return name;
}
void seedGame(){
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
}
int getRandomRoll(){
    return (rand()%6)+1;
}
int getMaxBet(){
    cout << "What would you like to be the maximum bet? :";
    int maxBet=0;
    cin >> maxBet;
    while (maxBet<=0){
        cout << ANSII_RED <<"The maximum bet must be greater than or equal to 1.\n" << ANSII_NORMAL;
        cout << "What would you like to be the maximum bet? :";
        cin >> maxBet;
    }
    return maxBet;
}
int getUserBet(int currentScore_par, int maxBet_par){
    cout << "           Enter your bet: ";
    int bet=0;
    cin >> bet;
    while(bet>maxBet_par || bet>currentScore_par || bet<=0){
        if(bet>maxBet_par){
            cout << ANSII_RED << "You must not bet more than the maximum bet (" << maxBet_par << "): " << ANSII_NORMAL;
            cin >> bet;
        }else if(bet>currentScore_par){
            cout << ANSII_RED << "You must not bet more than your current score (" << currentScore_par << "): " << ANSII_NORMAL;
            cin >> bet;
        }else if(bet<=0){
            cout << ANSII_RED << "You must bet at least 1: " << ANSII_NORMAL;
            cin >> bet;
        }
    }
}