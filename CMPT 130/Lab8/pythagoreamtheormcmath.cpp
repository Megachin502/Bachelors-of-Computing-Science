#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
void input(double *sideA_par,double  *sideB_par);
double calculationHyp(double  sideA_par,double  sideB_par);
void calculationAngles(double  sideA_par,double  sideB_par, double  sideC_par);


int main(){
    cout << fixed << setprecision(1);
    double  sideA=0;
    double  sideB=0;
    input(&sideA,&sideB);
    double  sideC=calculationHyp(sideA,sideB);
    cout << "Hypotenuse: " << sideC;
    calculationAngles(sideA,sideB,sideC);


    return 0;
}
void input(double  *sideA_par,double  *sideB_par){
    cout << "Side A: ";
    cin >> *sideA_par;
    cout << "Side B: ";
    cin >> *sideB_par;
}
double calculationHyp(double sideA_par,double sideB_par){
    double  hypotenuse=sqrt(pow(sideA_par,2)+pow(sideB_par,2));
    return hypotenuse;
}
void calculationAngles(double sideA_par,double sideB_par, double sideC_par){
    cout << "\nAngle 1: " << asin(sideB_par/sideC_par)*57.295;
    cout << "\nAngle 2: " << acos(sideB_par/sideC_par)*57.295;
    cout << "\nAngle 90: " << 180-asin(sideB_par/sideC_par)*57.295-acos(sideB_par/sideC_par)*57.295;
    cout << "\nSum: " << asin(sideB_par/sideC_par)*57.295+acos(sideB_par/sideC_par)*57.295+(180-asin(sideB_par/sideC_par)*57.295-acos(sideB_par/sideC_par)*57.295);

}