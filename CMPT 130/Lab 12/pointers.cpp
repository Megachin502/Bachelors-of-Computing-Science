#include <iostream>
#include <iomanip>
using namespace std;
bool hasNegative(double *arr, int size);
void zeroDissimilarPrefix(int *num1,int *num2);
void testZeroPrefix(int a, int b);
int main() {
    double arr1[] = {2, 5.2, 6, 8, 6, 10, 325532, 0};
    cout << "Has negative #1?: " << hasNegative(arr1, 8) << endl;
    double arr2[] = {2, 7.2, 0.1, -2, 5};
    cout << "Has negative #2?: " << hasNegative(arr2, 5) << endl;
    double arr3[] = {-1, -5, -153};
    cout << "Has negative #3?: " << hasNegative(arr3, 3) << endl;
    testZeroPrefix(699,299);


    return 0;
}
bool hasNegative(double *arr, int size){
    for(int i=0;i<size;i++){
        if(arr[i]<0)
            return true;
    }
    return false;
}
void zeroDissimilarPrefix(int *a,int *b){
    int modStart=10;
    while(*a!=*b){
        if(*a%modStart==*b%modStart){
            modStart*=10;
            if(*a%modStart!=*b%modStart){
                modStart/=10;
                break;
            }
        }else{
            *a=0;
            *b=0;
        }
    }
    *a=*a%modStart;
    *b=*a%modStart;
}
const int NUM_DIGITS = 10;
void testZeroPrefix(int a, int b)
{
    cout << "Test wipe on " << setw(NUM_DIGITS) << a
         << " and " << setw(NUM_DIGITS) << b << endl;
    zeroDissimilarPrefix(&a, &b);
    cout << " =           " << setw(NUM_DIGITS) << a
         << " and " << setw(NUM_DIGITS) << b << endl;
}
