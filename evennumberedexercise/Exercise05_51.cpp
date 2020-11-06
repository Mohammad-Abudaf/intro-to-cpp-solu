#include <iostream>
#include <string>

using namespace std;

int main() {
    string digit;
    cout << "Enter the first 12 digits of an ISBN-13 as a string: "; 
    getline(cin, digit);
    int sumAllDigit;
    int evenDigit = 0, oddDigit = 0;
    string output;

    int stringLength = digit.length();

    if (stringLength == 12){
        for (int i = 0; i <= 11 ; ++i) {

            if ( (i+1) % 2 == 0){
                char number_as_a_string = digit[i];
                int toNumber;
                toNumber = static_cast<int>(number_as_a_string - '0');
                evenDigit += 3 * toNumber; }

            if ((i+1) % 2 != 0){
                char number_as_a_string = digit[i];
                int toNumber;
                toNumber = static_cast<int>(number_as_a_string - '0');
                oddDigit += toNumber; }
        }

        sumAllDigit = oddDigit + evenDigit;

        bool isTen = 10 - static_cast<int>(sumAllDigit * 0.1) == 10;
        int digit13 = 10 - static_cast<int>(sumAllDigit * 0.1);
        cout << digit13 << endl;
        if (isTen){
            cout << "The ISBN-13 number is " << digit + "0";
        } else {
            cout << "The ISBN-13 number is " << digit + to_string(digit13) << endl;
        }
    }
    else{
        cout << digit << "is an invalid input";
    }

    return 0;
}
