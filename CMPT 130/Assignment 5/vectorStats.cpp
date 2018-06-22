#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>
using namespace std;
vector<float>readVectorOfFloats();
void displayNumbers(vector<float>vectorOfFloats_par);
void displayStatistics(vector<float>vectorOfFloats_par);
bool isAscending(vector<float>vectorOfFloats_par);
bool isDescending(vector<float>vectorOfFloats_par);
float average(vector<float>vectorOfFloats_par);
float minimum(vector<float>vectorOfFloats_par);
float maximum(vector<float>vectorOfFloats_par);
float countNumberTimesValuePresent(vector<float>vectorOfFloats_par,float value);
void removeDuplicates(vector<float>&vectorOfFloats_par);
float mostCommonValue(vector<float>vectorOfFloats_par);
const int sentinel=0;
const int width=7;
int main() {
    // Read in the values:
    vector<float> userNumbers = readVectorOfFloats();

    // Display the output
    displayStatistics(userNumbers);
    return 0;

}
//Read vector of floats:
vector<float>readVectorOfFloats(){
    vector<float>vectors;
    cout << "Enter value (0 to end): ";
    float value=1;
    while(value!=sentinel){
        cin >> value;
        vectors.push_back(value);
        if(value==sentinel){
            vectors.pop_back();
        }
    }
    return vectors;
}
//Display Numbers:
void displayNumbers(vector<float>vectorOfFloats_par){
    cout << fixed << setprecision(2);
    for(int i=0; i<vectorOfFloats_par.size();i++){
        cout << "\t" << setw(width) << vectorOfFloats_par.at(i);
        if (i+1!=vectorOfFloats_par.size()){
            cout << ",";
        }
        if((i+1)%8==0){
            cout << endl;
        }
    }
    cout << "\n\nStatistics on those numbers:\n"
            "----------------------------\n";
    cout << "            Maximum:" << setw(width) << maximum(vectorOfFloats_par);
    cout << "\n            Minimum:" << setw(width) << minimum(vectorOfFloats_par);
    cout << "\n            Average:" << setw(width) << average(vectorOfFloats_par);
    cout << "\n\n       Is ascending:";
    if(isAscending(vectorOfFloats_par)==1){
        cout << setw(width) << "Yes";
    }else{
        cout << setw(width) << "No";
    }
    cout << "\n      Is descending:";
    if(isDescending(vectorOfFloats_par)==1){
        cout << setw(width) << "Yes";
    }else{
        cout << setw(width) << "No";
    }
    const vector<float>copyOfVectorOfFloats=vectorOfFloats_par;
    cout << "\n\nData with duplicates remove:\n"
            "----------------------------\n";
    removeDuplicates(vectorOfFloats_par);
    for(int i=0; i<vectorOfFloats_par.size();i++){
        cout << "\t" << setw(width) << vectorOfFloats_par.at(i);
        if (i+1!=vectorOfFloats_par.size()){
            cout << ",";
        }
        if((i+1)%8==0){
            cout << endl;
        }
    }
    cout << "\n\nRepetition counts in user data:\n"
            "-------------------------------\n";
    cout << "Most common value is " << mostCommonValue(copyOfVectorOfFloats) <<"!\n\n";
    for(int i=0; i<vectorOfFloats_par.size();i++){
        cout << "The value" << setw(width) << vectorOfFloats_par.at(i) << " occurs   " << countNumberTimesValuePresent(copyOfVectorOfFloats,vectorOfFloats_par.at(i)) << " time(s).\n";
    }
}
void displayStatistics(vector<float>vectorOfFloats_par){
    cout << "\n***********************************\n"
            "Analysis of the numbers:\n"
            "***********************************\n";
    cout << "\nValues:\n"
            "-------\n";
    displayNumbers(vectorOfFloats_par);
}
//Detect if ascending vector
bool isAscending(vector<float>vectorOfFloats_par){
    if(vectorOfFloats_par.size()==0){
        return true;
    }
    //Don't compare to extra vector: vectorOfFloats_par.size()-1
    for(int i=0;i<vectorOfFloats_par.size()-1;i++){
        if(vectorOfFloats_par.at(i)==vectorOfFloats_par.at(i+1)){
            return false;
        }
        if(vectorOfFloats_par.at(i)>vectorOfFloats_par.at(i+1)){
            return false;
        }
    }
    return true;
}
//Detect if descending vector
bool isDescending(vector<float>vectorOfFloats_par){
    if(vectorOfFloats_par.size()==0){
        return true;
    }
    //Don't compare to extra vector: vectorOfFloats_par.size()-1
    for(int i=0;i<vectorOfFloats_par.size()-1;i++){
        if(vectorOfFloats_par.at(i)==vectorOfFloats_par.at(i+1)){
            return false;
        }
        if(vectorOfFloats_par.at(i)<vectorOfFloats_par.at(i+1)){
            return false;
        }
    }
    return true;
}
float average(vector<float>vectorOfFloats_par){
    if(vectorOfFloats_par.size()==0){
        return 0;
    }else{
        float sum=0;
        for(int i=0;i<vectorOfFloats_par.size();i++){
            sum=sum+vectorOfFloats_par.at(i);
        }
        return sum/vectorOfFloats_par.size();
    }
}
float minimum(vector<float>vectorOfFloats_par){
    if(vectorOfFloats_par.size()==0){
        return 0;
    }else{
        return *min_element(vectorOfFloats_par.begin(),vectorOfFloats_par.end());
    }
}
float maximum(vector<float>vectorOfFloats_par){
    if(vectorOfFloats_par.size()==0){
        return 0;
    }else{
        return *max_element(vectorOfFloats_par.begin(),vectorOfFloats_par.end());
    }
}
float countNumberTimesValuePresent(vector<float>vectorOfFloats_par,float value){
        return count(vectorOfFloats_par.begin(),vectorOfFloats_par.end(),value);
}

float mostCommonValue(vector<float>vectorOfFloats_par){
    if(vectorOfFloats_par.size()==0) {
        return 0;
    }else{
        sort(vectorOfFloats_par.begin(),vectorOfFloats_par.end());
        int counter=0;
        int counter2=0;
        for(int i=vectorOfFloats_par.size()-1;i>0;i--){
            if(vectorOfFloats_par.at(i)==vectorOfFloats_par.at(i-1)){
                counter++;
                counter2=counter;
            } else{
                counter=0;
            }
            if(counter2>counter){
                return vectorOfFloats_par.at(i);
            }
        }
    }
}
void removeDuplicates(vector<float>&vectorOfFloats_par){
    sort(vectorOfFloats_par.begin(),vectorOfFloats_par.end());
    vectorOfFloats_par.erase(unique(vectorOfFloats_par.begin(),vectorOfFloats_par.end()),vectorOfFloats_par.end());
}
