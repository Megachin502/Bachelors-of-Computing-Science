/*Elvis lam
 * 301285572
 * ela46@sfu.ca*/

#include <iostream>
#include <iomanip>
#include "ansiicodes.h"
using namespace std;
int main(){

    //Output menu which includes prices
    const int PRICE_SMALL_DOLLARS=1, PRICE_MEDIUM_DOLLARS=2, PRICE_LARGE_DOLLARS=8;
    cout << "Menu:\n"
         << "*******************\n"
         << "New-age " << ANSII_YELLOW << ANSII_UNDERLINE << "lemonade" << ANSII_NORMAL << " sizes:\n"
         << "  Small:" << "  $" << PRICE_SMALL_DOLLARS << endl
         << "  Medium:" << " $" << PRICE_MEDIUM_DOLLARS << endl
         << "  Large:" << "  $" << PRICE_LARGE_DOLLARS << endl;

    //Input how many drinks of each size are sold
    int smallSold=0, mediumSold=0, largeSold=0;
    cout << ANSII_BLUE << ANSII_BOLD << "\nEnter number of drinks purchased...\n" << ANSII_NORMAL;
    cout << "  # Small:  ";
    cin  >> smallSold;
    cout << "  # Medium: ";
    cin  >> mediumSold;
    cout << "  # Large:  ";
    cin  >> largeSold;

    //Output total cost of the drinks and displays a subtotal before tax
    const int PRICE_SMALL_CENTS=100, PRICE_MEDIUM_CENTS=200, PRICE_LARGE_CENTS=800;
    const int CENTS_IN_DOLLARS=100;
    int price=(smallSold*PRICE_SMALL_CENTS)+(mediumSold*PRICE_MEDIUM_CENTS)+(largeSold*PRICE_LARGE_CENTS);
    int dollars=price/CENTS_IN_DOLLARS;
    int cents=price%CENTS_IN_DOLLARS;
    cout << ANSII_BLUE << ANSII_BOLD <<  "\nYour order is:\n" << ANSII_NORMAL
         << "  Small:  " << setw(3) << smallSold << " @ $" << PRICE_SMALL_DOLLARS << " each\n"
         << "  Medium: " << setw(3) << mediumSold << " @ $" << PRICE_MEDIUM_DOLLARS << " each\n"
         << "  Large:  " << setw(3) << largeSold << " @ $" << PRICE_LARGE_DOLLARS << " each\n";
    cout << ANSII_BLUE << ANSII_BOLD << "Amount owing:\n" << ANSII_NORMAL
         << "  Subtotal: $" << setw(3) << dollars << "." << setfill('0') << setw(2) << cents << setfill(' ');

    //Compute 12% tax and display it
    const int TAX_RATE=12;
    int taxAmount=(price*TAX_RATE/CENTS_IN_DOLLARS);
    int taxAmountDollars=taxAmount/CENTS_IN_DOLLARS;
    int taxAmountCents=taxAmount%CENTS_IN_DOLLARS;
    cout << "\n  Tax:      $" << setw(3) << taxAmountDollars << "." << setfill('0') << setw(2) << taxAmountCents << setfill(' ');

    //Output grand total owing
    int grandTotalDollars=dollars+taxAmountDollars;
    int grandTotalCents=cents+taxAmountCents;
    cout << "\n  Total:    " << ANSII_RED << "$" << setw(3) << grandTotalDollars << "." << setfill('0') << setw(2) << grandTotalCents << setfill(' ');

    return 0;
}