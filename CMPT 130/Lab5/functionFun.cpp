#include <iostream>
using namespace std;
void displayWelcome();
void displaySumOfSquaresUptoN(int n);
int getSumOfSquaresUpToN(int n);
int stars(int n);
int main(){
    displayWelcome();
    displayWelcome();
    cout << "Enter your favourite number: ";
    int favNum=0;
    cin >> favNum;
    displaySumOfSquaresUptoN(favNum);
    int sum = getSumOfSquaresUpToN(favNum);
    cout << "Returned sum of squares is: " << sum << endl;
    stars(sum);


}
void displayWelcome(){
    cout << "Hello and welcome to the lab on functions!\n";
}
void displaySumOfSquaresUptoN(int n){
    int counter=1;
    int sum=0;
    while (counter<=n){
        sum=sum+(counter*counter);
        counter++;
    }
    cout << "Sum of squares 1 .. " << n << " = " << sum << endl;
}
int getSumOfSquaresUpToN(int n){
    int counter=1;
    int sum=0;
    while (counter<=n){
        sum=sum+(counter*counter);
        counter++;
    }
    return sum;
}
int stars(int n){
    while(n>0){
        cout << "*";
        n--;
    }
}
