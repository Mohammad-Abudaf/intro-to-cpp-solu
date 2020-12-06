#include <iostream>

using namespace std;

bool isEven(int &number){
    // this function return true if the number is even of not
    // its to simple don't be panic!
    return number % 2 == 0;
}

void fillList (int list[], int sizeOfList){
    // function fills ant list with random number between 0 to 25
    for (int i = 0; i < sizeOfList; ++i) {
        list[i] = rand()%25;
    }
}

int sumOfEvenNumber(int const list[], int const &sizOfList){
    // name is very clear!
    int sum = 0;
    for (int i = 0; i < sizOfList; ++i) {
        int checkNumber = list[i];
        if (isEven(checkNumber)){
            sum += checkNumber;
        }
    }
    return sum;
}
int main() {
    std::cout << "Hello, World!" << std::endl;
    int const sizeOfList = 25;
    int listOfRandomNumber[sizeOfList];
    fillList(listOfRandomNumber, sizeOfList);
    cout << "{";
    for (int i = 0; i < sizeOfList; ++i) {
        cout << listOfRandomNumber[i] << ", ";
    }
    cout << "}" << endl;
    cout << "the sum of random even Number is " << sumOfEvenNumber(listOfRandomNumber, sizeOfList) << endl;
    return 0;
}
