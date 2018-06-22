#include <iostream>
using namespace std;
void displayArray(int arr_par[],int size);
void populateSequence(int arr[], int size, int start, int gap);
int  minValue(int arr[],int size);

int main() {
    // Test displayArray():
    int arr0[] = {42, 0, 1, 101, 58};
    displayArray(arr0, 5);

    // Test 1 populateSequence: Expected values 7, 9, 11, and 13
    cout << endl;
    int arr1[4];
    populateSequence(arr1, 4, 7, 2);
    displayArray(arr1, 4);
    // Test 2 populateSequence: Expected values 2, -1, and -4
    int arr2[3];
    populateSequence(arr2, 3, 2, -3);
    displayArray(arr2, 3);

    // Test for minValue
    int arr3[] = {17, 3, 12, 11, 4};
    int val1 = minValue(arr3, 5);
    // should print the value 3
    cout << endl << "Min1: " << val1;
    int arr4[] = {1, 0, 7, 23, 2, -1};
    // should print the value -1
    cout << "   Min2: " << minValue(arr4, 6) << "\n";


    return 0;
}


void displayArray(int arr[],int size){
    cout << "Array contents: ";
    for(int i=0;i<size;i++){
        cout << arr[i] << ", ";
    }
}
void populateSequence(int arr[], int size, int start, int gap){
    for(int i=0;i<size;i++){
        arr[i]=start;
        start+=gap;
    }
}
int  minValue(int arr[],int size){
    int smallest=0;
    for(int i=0;i<size;i++){
        smallest=arr[i];
        if(arr[i]<arr[i+1]){
            smallest=arr[i];
        }
    }
    return smallest;
}