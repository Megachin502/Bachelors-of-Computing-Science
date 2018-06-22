// Exercise: Make this piece of code use functions!

#include <iostream>
#include <iomanip>
using namespace std;
void heading();
void table();
const int MAX_VAL_IN_TABLE = 20;
int main()
{
    // Output headings:
    heading();

    // Generate the table.
        table();
        // Display the values.
        cout << setw(4) << n << setw(5) << nSquared
             << setw(8) << sum1toN << setw(10) << twoToTheN << endl;
        n++;
    }

    return 0;
}
void heading(){
    cout << setw(4) << "n"
    << setw(5) << "n^2"
    << setw(8) << "1..n"
    << setw(10) << "2^n" << endl;
    cout << setw(4) << "---"
    << setw(5) << "----"
    << setw(8) << "-----"
    << setw(10) << "--------" << endl;
}
void table(){
    int n = 1;
    while (n <= MAX_VAL_IN_TABLE){
        int sum1toN = 0;
        int i = 0;
        while (i <= n) {
            sum1toN += i;
            i++;
        }
        int twoToTheN = 1;
        int j = 1;
        while (j <= n) {
            twoToTheN *= 2;
            j++;
        }
    }
}