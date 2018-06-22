#include <iostream>
using namespace std;
void c();
void m();
int main() {
    c();
    cout << endl << endl;
    m();
    return 0;
}
void c(){
    int width=6;
    while(width>0){
        cout << "C";
        width--;
    }
    int vertical=5;
    while(vertical>0){
        cout << "C\n";
        vertical--;
    }
    int width2=7;
    while(width2>0){
        cout << "C";
        width2--;
    }
}
void m(){
    int width=6;
    while(width>0){
        cout << "M";
        width--;
    }
    int vertical1=5;
    while (vertical1>0){
        cout << "M\n";
        vertical1--;
    }
}
