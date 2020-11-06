#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    
    double amount;
    cout << "enter the amount:  " ; cin >> amount;
    int months;
    cout << "enter the nummber of months: "; cin >> months;
    double percentage;
    cout << "enter percentage: % "; cin >> percentage;

    cout << "Month CD Value";
    for (int countingMonth = 0; countingMonth <= months; ++countingMonth){
        double value;
        value = amount + amount * percentage/1200;
        amount = value;
        cout <<  countingMonth << setw (5 - to_string(countingMonth).length()) << " " << fixed << setprecision(2)<< amount << endl;
    }
    return 0;
}
