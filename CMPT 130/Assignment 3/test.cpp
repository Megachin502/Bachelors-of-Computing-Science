// Example program
#include <iostream>
#include <string>
#include <climits>
using namespace std;
int main(){
    int const LOOPS=5;
    int num=LOOPS;
    while(num>0){
        int count=num;
        while(count<LOOPS){
            cout << count<<",";
            count++;
        }
        cout << endl;
        num--;
    }
}
