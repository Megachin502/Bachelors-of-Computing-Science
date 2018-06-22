#include <iostream>
#include <vector>
#include <iomanip>
#include "ansiicodes.h"
using namespace std;
vector<int> countLetters(string inString);
void printLetterCount(vector<int>vector_par);
const int width=3;
int main(){
    //Input text
    cout << "Enter your string.\n" << ": ";
    string x;
    getline(cin,x);
    cout << "You entered: " << x;
    vector<int>vector=countLetters(x);
    printLetterCount(vector);
}
vector<int> countLetters(string inString){
    vector<int>letterCount;
    letterCount.resize(26);
    vector<int>counter;
    counter.resize(26);
    //Push back counter into lettercount position
    for(char ch : inString) {
        char asUpper = toupper(ch);
        int daIndex = asUpper - 'A';
        for(int i=0;i<26;i++){
            if(daIndex==i) {
                counter.at(i)++;
                letterCount.at(i) = counter.at(i);
            }
        }
    }
    return letterCount;
}
void printLetterCount(vector<int>vector_par){
    cout << "\n\nCharacter Count:\n"
            "----------------\n";
    vector<char>alphabet;
    char letter='A';
    //Push back letter into alphabet
    while(letter<='Z'){
        alphabet.push_back(letter);
        letter++;
    }
    //Ouput Alphabet
    for(int i=0;i<vector_par.size();i++){
        if(i<=3){
            cout << ANSII_BLUE <<setw(width) <<alphabet.at(i) << ANSII_NORMAL;
        } else if(i>=4 && i<=6){
            cout << ANSII_CYAN <<setw(width) <<alphabet.at(i) << ANSII_NORMAL;
        }else if(i>=7 && i<=10){
            cout << ANSII_BOLD << ANSII_CYAN <<setw(width) <<alphabet.at(i) << ANSII_NORMAL;
        }else if(i>=11){
            cout << ANSII_BOLD << ANSII_YELLOW << setw(width) <<alphabet.at(i) << ANSII_NORMAL;
        }
    }
    //Output word count
    cout << endl;
    for(int i=0;i<vector_par.size();i++){
        if(i<=3){
            cout << ANSII_BLUE <<setw(width) <<vector_par.at(i) << ANSII_NORMAL;
        } else if(i>=4 && i<=6){
            cout << ANSII_CYAN <<setw(width) <<vector_par.at(i) << ANSII_NORMAL;
        }else if(i>=7 && i<=10){
            cout << ANSII_BOLD << ANSII_CYAN <<setw(width) <<vector_par.at(i) << ANSII_NORMAL;
        }else if(i>=11){
            cout << ANSII_BOLD << ANSII_YELLOW << setw(width) <<vector_par.at(i) << ANSII_NORMAL;
        }
    }
}