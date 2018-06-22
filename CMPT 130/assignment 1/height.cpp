/*Elvis Lam
  301285572
  ela46@sfu.ca*/

#include <iostream>
#include "ansiicodes.h"
using namespace std;
int main() {

    //Input height in inches
    int heightinInches;
    cout << "Enter your height" << ANSII_RED << " (inches): " << ANSII_NORMAL;
    cin >> heightinInches;

    //Convert height from inches to feet (1 feet=12 inches)
    int heightinFeet=heightinInches/12;
    int remainderofHeightinFeet=heightinInches%12;

    //Output height in feet and inches
    cout << "Write either: " << ANSII_BOLD << ANSII_GREEN << "\"I\'m " << heightinFeet << "\'" << remainderofHeightinFeet << "\"!\""
         << ANSII_NORMAL <<" \\ " << ANSII_BOLD << ANSII_MAGENTA << "\"I\'m " << heightinInches << "\" tall!\"" << ANSII_NORMAL;

    return 0;
}