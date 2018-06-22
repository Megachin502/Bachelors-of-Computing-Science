#include <iostream>
#include <iomanip>
#include "ansiicodes.h"
using namespace std;
void calculations(double minVolts_par, double maxVolts_par, double voltStepSize_par);
int const EMPTY_CELL_VOLTAGE=3000, CONVERSION_TO_PERCENT=100, CELL_VOLTAGE_BETWEEN_FULL_AND_EMPTY=1200;
int main() {
    //Menu for inputs min,max,step voltages
    cout << "Battery Voltage to State Of Charge (SoC) Generator" << endl << "--------------------------------------------------\n";
    cout << "Enter minimum voltages to show in table [mV]: ";
    int minVolts=0;
    cin >> minVolts;
    cout << "Enter maximum voltages to show in table [mV]: ";
    int maxVolts=0;
    cin >> maxVolts;
    cout << "Enter voltage step size [mV]: ";
    int voltStepSize=0;
    cin >> voltStepSize;
    cout << ANSII_BOLD << "\nVoltage    SoC Description\n" << "------- ------ -----------\n" << ANSII_NORMAL;
    calculations(minVolts,maxVolts,voltStepSize);
    return 0;
}
void calculations(double minVolts_par, double maxVolts_par, double voltStepSize_par){
    //Calculate minvolts with steps + State of charge
    while (minVolts_par<=maxVolts_par){
        int SoC=(minVolts_par-EMPTY_CELL_VOLTAGE)*CONVERSION_TO_PERCENT/CELL_VOLTAGE_BETWEEN_FULL_AND_EMPTY;
        if(SoC<15 && SoC>=0){
            cout << ANSII_RED << minVolts_par << "mV" << ANSII_NORMAL;
        }else if(SoC>=15 && SoC<35){
            cout << ANSII_CYAN << minVolts_par << "mV" << ANSII_NORMAL;
        }else if(SoC>=35 && SoC<95){
            cout << ANSII_NORMAL << minVolts_par << "mV" << ANSII_NORMAL;
        }else if(SoC>=95 && SoC<=100){
            cout << ANSII_GREEN << minVolts_par << "mV" << ANSII_NORMAL;
        }else{
            cout << ANSII_RED << minVolts_par << "mV" << ANSII_NORMAL;
        }
        //OutPut SoC
        if(SoC<15 && SoC>=0){
            cout << ANSII_RED << setw(7) << SoC << "%" << ANSII_NORMAL;
        }else if(SoC>=15 && SoC<35){
            cout << ANSII_CYAN << setw(7) << SoC << "%" << ANSII_NORMAL;
        }else if(SoC>=35 && SoC<95){
            cout << ANSII_NORMAL << setw(7) << SoC << "%" << ANSII_NORMAL;
        }else if(SoC>=95 && SoC<=100){
            cout << ANSII_GREEN << setw(7) << SoC << "%" << ANSII_NORMAL;
        }else if(SoC>100){
            cout << ANSII_RED << setw(8) << "100%" << ANSII_NORMAL;
        }else if(SoC<0){
            cout << ANSII_RED << setw(8) << "0%" << ANSII_NORMAL;
        }
        //Output Description
        if(SoC<15 && SoC>=0){
            cout << ANSII_RED << " Too low!\n" << ANSII_NORMAL;
        }else if(SoC>=15 && SoC<35){
            cout << ANSII_CYAN << " Low\n" << ANSII_NORMAL;
        }else if(SoC>=35 && SoC<95){
            cout << ANSII_NORMAL << " OK\n" << ANSII_NORMAL;
        }else if(SoC>=95 && SoC<=100){
            cout << ANSII_GREEN << " Full\n" << ANSII_NORMAL;
        }else if(SoC>0){
            cout << ANSII_RED << " CAUTION: Overcharged!\n" << ANSII_NORMAL;
        }else{
            cout << ANSII_RED << " Too low!\n" << ANSII_NORMAL;
        }
        minVolts_par=minVolts_par+voltStepSize_par;
    }
}
