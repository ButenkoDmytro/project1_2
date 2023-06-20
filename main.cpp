#include <iostream>
using namespace std;

int main(){
    const float k_USD = 37.2;
    const float k_EUR = 40.7;
    float UAH;
    cout << "Project to culculate the currency exchange" << endl;
    cout << "Enter UAH: ";
    cin >> UAH;
    cout << "DOLLAR: " << (UAH/k_USD) << endl;
    cout << "EURO: " << (UAH/k_EUR) << endl;
    return 0;
}