#include <cmath>
#include <iostream>

using namespace std;

double pi(int number);

int main() {
    int number = 0;
    do {
        cout << "enter number: ";
        cin >> number;
        cout << number << "     " << "f(x)" << endl;
        cout << number << "     " << pi(number) << endl;
    } while (number != 0);


    return 0;
}
double pi(int number) {
    double underRootSum = 0;
    for (int i = 1; i <= number; ++i) {
        underRootSum += 1 / pow(i, 2);
    }
    return sqrt(6 * underRootSum);
}