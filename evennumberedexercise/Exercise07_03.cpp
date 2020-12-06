#include <iostream>

using namespace std;

void fillList(int list[], int &sizeOfList){
    // this function fills the list by users!
    int counting = 0;
    for (int i = 0; i < sizeOfList; ++i) {
        cout << "enter a number: ";
        int input; cin >> input;
        if(input > 100 or input < 0){
            cout << "please just numbers between 1 and 100!" << endl;
            continue;
        }
        if (input == 0){
            sizeOfList = counting;
            break;
        }
        else{
            counting = counting + 1;
            list[i] = input;
        }
    }
}


void countTheOccurrence(int const list[], int const &sizeofList) {
    for (int i = 0; i < sizeofList; ++i) {
        int countingNumber = 0;
        for (int j = 0; j < sizeofList; ++j) {
            if (list[i] == list[j])
                countingNumber++;
        }
        cout << list[i] << "is inputted "<< countingNumber << endl;
    }
}

int main(){
    // main function that you and i know what it does!

    std::cout << "Hello, World!" << std::endl;
    int sizeOfList = 100;
    int listOfNumbers [sizeOfList];

    fillList(listOfNumbers, sizeOfList);

    countTheOccurrence(listOfNumbers, sizeOfList);
    return 0;
}
