#include <iostream>
#include <iomanip>
using namespace std;

int reversalNumber(int number);
bool primeNumber(int number);

int main(){
    // here we will display the 100 Emrip numbers!
    int const NUMBER_OF_EMRIP = 100;
    int count = 0;
    int number = 13;  // 13 is initial value
    int &refNumber = number;

    // loop to get the total numbers!
    while (count < NUMBER_OF_EMRIP){
        int row = 0;
        while (row < 10){
            if (primeNumber(number) && primeNumber(reversalNumber(number))){
                cout << number << "  ";
                number++;
                count++;
            }
            else{
                number++;
                continue;
            }
            row++;
        }cout << endl;
    }
    return 0;
}

int reversalNumber(int number){  // function returns the reverse of any number
    int reverse = 0;
    int digit;
    do {
        digit = number % 10;
        reverse = reverse * 10 + digit;
        number  = number / 10;
    }while (number % 10 != 0);
    return reverse;
}

bool primeNumber (int number){   //this function check if the input there is prime or not
    bool isPrime = true;
    for (int i = 2; i <= number / 2; ++i) {
        if (number % i == 0){
            isPrime = false;
            break;}
    }
    return isPrime;
}

