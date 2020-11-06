#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); 

    while (true){
        cout << "Main menu\n"
                "1: Addition\n"
                "2: Subtraction\n"
                "3: Multiplication\n"
                "4: Division\n"
                "5: Exit" << endl;
        cout <<" enter your choie: ";
        int choose;
        cin >> choose;
        if (choose == 5) {
            cout << "your are out now! ";
            break;}

        int number1 = rand() % 11;
        int number2 = rand() % 11;
        int answer;

        switch (choose) {
            case 1: cout << number1 << " + " << number2 << endl;
                    cout << "your answer: ";
                    cin >> answer;
                answer == number1 + number2 ? cout << "you are correct" << endl : cout << "wrong answer"<< endl; break;

            case 2: if(number1 < number2) {
                int temp = number1;
                number1 = number2;
                number2 = number1;
                cout << number1 <<  " - " << number2 << endl;
                cin >> answer;
                    answer == number1 - number2 ? cout << "you are correct" << endl: cout << "wrong answer"<< endl; break;
                } else {
                    cout << number1 <<  " - " << number2 << endl;
                    cin >> answer;
                    answer == number1 - number2 ? cout << "you are correct" << endl : cout << "wrong answer" << endl; break;}

            case 3: cout << number1 << " x " << number2 << endl;
                cout << "your answer: ";
                cin >> answer;
                answer == number1 * number2 ? cout << "you are correct" << endl: cout << "wrong answer"<< endl; break;
            case 4:
                if (number2 == 0){
                    number2 = rand() % 11 + 1;
                    cout << number1 << " / " << number2 << endl;
                    cout << "your answer: ";
                    cin >> answer;
                    answer == number1 / number2 ? cout << "you are correct" << endl : cout << "wrong answer" << endl; break;
                } else {
                    cout << number1 << " / " << number2 << endl;
                    cout << "your answer: ";
                    cin >> answer;
                    answer == number1 / number2 ? cout << "you are correct" << endl : cout << "wrong answer" << endl; break;
                }
            default: cout << "there is a mistake if this message showed up";
        }
    }
    return 0;
}
