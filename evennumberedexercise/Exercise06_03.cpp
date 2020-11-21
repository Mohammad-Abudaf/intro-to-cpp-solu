#include <iostream>
#include <cmath>
using namespace std;

int cubeOfDigit (int number)
{
    // function returns sum of cubic integer after dividing into single digits!
    int sum = 0;
    while (number > 0)
    {
        sum += pow(number % 10, 3);
        number /= 10;
    }
    return sum;
}

void isArmstrong (int number, int sum)
{
    // its clear no need to comment!
    sum = cubeOfDigit(number);
    if (sum == number)
        cout << "This Number is Armstrong! ";
    else
        cout << "It's not Armstrong! ";
}
int main()
{
    //program check if the number is Armstrong or not!
    int input;
    cout << "enter number: "; cin >> input;
    int sum = cubeOfDigit(input);

    isArmstrong(input, sum);

    return 0;
}