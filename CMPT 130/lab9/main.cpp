#include <iostream>
#include <vector>
using namespace std;
/*
 * Creates a vector of strings by asking the user to enter phrases.
 * Stops when user enters a phrase of length 0 characters.
 * Returns: vector of phrases (strings)
 */
vector<string> createPhraseVector();
void displayPhrases(vector<string>phrases_par);
int findShortestIdx(vector<string>data);
int findLongestIdx(vector<string> data);
void swap(vector<string>phrases_par);
int main() {
    vector<string>phrases=createPhraseVector();
    displayPhrases(phrases);
    cout << "Shortest idx = " << findShortestIdx(phrases) << " = " << phrases.at(findShortestIdx(phrases)) << endl;
    cout << "Longest idx = " << findLongestIdx(phrases) << " = " << phrases.at(findLongestIdx(phrases));
    swap(phrases);




    return 0;
}
vector<string> createPhraseVector(){
    string phrase="initialized";
    vector<string>phrases;
    while(phrase.size() != 0){
        cout << "Enter a phrase: ";
        getline(cin, phrase);
        if(phrase.size() == 0){
            break;
        }
        phrases.push_back(phrase);
    }
    return phrases;
}
void displayPhrases(vector<string>phrases_par){
    cout << "Phrases: " << endl;
    for(int i=0; i<phrases_par.size(); i++){
        cout << "         \"" << phrases_par.at(i) << "\"" << endl;
    }
}
int findShortestIdx(vector<string>data){
    for(int i=0; i<data.size(); i++){
        if(data.at(0).size()>data.at(i).size()){
            return i;
        }
    }
}
int findLongestIdx(vector<string> data){
    for(int i=0; i<data.size(); i++){
        if(data.at(0).size()<data.at(i).size()){
            return i;
        }
    }
}
void swap(vector<string>phrases_par){
    cout << "\nPhrases: " << endl;
    swap(phrases_par.at(findShortestIdx(phrases_par)),phrases_par.at(findLongestIdx(phrases_par)));
    for(int i=0; i<phrases_par.size(); i++){
        cout << "         \"" << phrases_par.at(i) << "\"" << endl;
    }
}


