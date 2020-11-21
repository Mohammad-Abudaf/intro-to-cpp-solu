// this solution had posted on github by Mohammed Abudaf
// for more please visit https://github.com/Mohammad-Abudaf/intro-to-cpp-solu!
#include <iostream>
#include <string>

using namespace std;

// return true if the card is valid
bool isValid(const string& cardNumber);

//get the sum of all doubled even places number
int sumOfAllDoubledEvenPlaces (const string& cardNumber);

//return the number if its a single digit or not, otherwise
//return the sum of to digits
int getDigit(int number);

//return the sum of all odd places digit in the card number
int sumOfAllOddPlaces(const string& cardNumber);

//return true if substr is prefix for cardNumber
bool startsWith(const string &cardNumber, const string &substr);


int main(){

    string cardNumber, substr;
    cout << "enter card number: "; cin >> cardNumber;
    cout << "enter substr type: " ; cin >> substr;

    bool isRightPrefix = startsWith(cardNumber, substr);
    bool divisibleOver10 = (sumOfAllDoubledEvenPlaces(cardNumber) + sumOfAllOddPlaces(cardNumber)) % 10 == 0;

    if (divisibleOver10 && isValid(cardNumber) and isRightPrefix)
        cout << "this number " << cardNumber << " is valid" << endl;
    else
        cout << "this number: " << cardNumber << " is invalid" << endl;

    return 0;
}
int getDigit(int number){
    // this function returns the sum of the digits!
    number = (number - 10) + static_cast<int>(number / 10);
    return number;
}

int sumOfAllDoubledEvenPlaces (const string& cardNumber){
    // this functions returns the sum of even places after doubled!
    int sum = 0;
    for (unsigned int i = cardNumber.length(); i > 0; --i) {
        int n = static_cast<int>(cardNumber[i - 2] - '0');
        int nx2 = n * 2;
        if (nx2 > 9){
            nx2 = getDigit(nx2);
        }
        sum += nx2;
        i--;
    }
    return sum;
}
int sumOfAllOddPlaces(const string& cardNumber){
    // function find the some of all odd digit in the card Number
    int sum = 0;
    for (unsigned int i = cardNumber.length(); i > 0; --i) {
        int n = static_cast<int>(cardNumber[i - 1] - '0');
        sum += n;
        i--;
    }
    return sum;
}

bool isValid (const string &cardNumber){
    // this function check if the card number between 13 and 16!
    int length = cardNumber.length();
    return length >= 13 && length <= 16;
}
bool startsWith(const string &cardNumber, const string &substr){
    // this function return if the card has true prefix or not!
    char prefix = cardNumber[0];
    int longPrefix = static_cast<int>(cardNumber[0] - '0') * 10 + static_cast<int>(cardNumber[1] - '0');
    if (substr == "master card" or substr == "visa card" or substr == "american express" or substr == "discover")
    {
        if (prefix == '4' or  prefix == '5' or prefix == '6')
            return true;
        if (longPrefix == 37)
            return true;
        else
            return false;
    }else
        return false;

}