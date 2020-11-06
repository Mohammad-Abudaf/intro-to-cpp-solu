#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double sum = 0;
    int n = 10;
    for (int i = 1; i <= n; ++i) {
        double number;
        cout << "enter ten numbers "; cin >> number;
        sum += number;
    }
    double mean = (sum) / n;
    double deviation = sqrt((mean - pow(mean, 2))/(n - 1));
    cout << "The mean is " << mean;
    cout << "The standard deviation is " << deviation; 
    
    return 0;
}
