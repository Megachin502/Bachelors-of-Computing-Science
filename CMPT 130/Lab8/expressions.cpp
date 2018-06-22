#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    cout << fixed << setprecision(2) << endl;
    float a=3+10/20;
    cout << a << endl;
    float b = 3.0 + 10.0 / 20; //Extra 0's
    cout << b << endl;
    float c = 3.0 + static_cast<float>(10 / 20);
    cout << c << endl;
    float d = 3.0 + static_cast<float>(10) / 20;
    cout << d << endl;
    float e = 3.0 + 10 / static_cast<float>(20);//double is highest priority
    cout << "e: " <<e << endl;
    int f = 3.0 + 10 / static_cast<float>(20);
    cout << "f: " <<f << endl;
    int g = 100000000 * 100000000;
    cout << g << endl;
    float h = 3.0 + static_cast<int>(10.0) / 20;
    cout << h << endl;







    return 0;
}