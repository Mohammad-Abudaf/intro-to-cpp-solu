#include <iostream>

using namespace std;
int main() {
    int number; 
    int maxNumber = 0; 
    int count = 0; 
    std::cout << "Hello, World!" << std::endl;
    
    while (true){
        cout << "enter number: "; 
        cin >> number; 
        
        if (number == 0) {break;}
        if (number > maxNumber) {
            maxNumber = number;
            count = 0;
        }
        if (maxNumber == number) {count++; } else{continue;}

    }
    cout << "The largest number is " << maxNumber << endl;
    cout << "The occurrence count of the largest number is " << count << endl;

    return 0;
}
