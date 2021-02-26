#include <iostream>
#include <ctime>
using namespace std;

const int ROWS = 4;
const int COL = 4;

int InRow(const int a[][COL], const int SIZE, const int key);
int sameNumbersInCol(const int a[][COL], const int ROW, const int kay);
int sameNumbersDia(const int a[][COL], const int SIZE, const int key);
int sameNumbersInSUBDia(const int a[][COL], const int SIZE, const int key);

int main(){
    srand(time(nullptr));
    // filling the array with random  0's and 1's!
    int array[ROWS][COL] = {};
    for (auto& i : array){
        for (int &j : i){
            j = rand() % 2;
        }
    }
    // display the array in the console 4 elements by one line!
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COL; ++j) {
            cout << array[i][j];
        }
        cout << '\n';
    }
    // find zeros in all rows!
    int zerosRow[ROWS] = {};
    for (int i = 0; i < ROWS; ++i) {
        zerosRow[i] = InRow(array, 4, 0);
    }
    int onesRow[ROWS] = {};
    for (int i = 0; i < ROWS; ++i) {
        onesRow[i] = InRow(array, 4, 1);
    }
    // display ones and zeros!
    cout << "All 0's on row: ";
    for (int i = 0; i < 4; ++i)
        cout << zerosRow[i] << " ";
    cout << '\n';
    cout << "All 1's in row: ";
    for (int i = 0; i < 4; ++i)
        cout << onesRow[i] << " ";
    cout << '\n';
    // display the col
    cout <<"column " <<sameNumbersInCol(array, 4, 1) << " has " << 1;
    cout << '\n';
    cout <<  "column "<<sameNumbersInCol(array, 4, 0) << " has " << 0;
    return 0;
}
int InRow(const int a[][COL], const int SIZE, const int key){
    for (int i = 0; i < SIZE; ++i) {
            if (a[i][0] == key && a[i][1] == key && a[i][2] == key && a[i][3] == key){
                return i;
            }
    }
    return -1;
}
int sameNumbersInCol(const int a[][COL], const int ROW, const int kay){
    for (int i = 0; i < COL; ++i) {
        if (a[0][i] == kay && a[1][i] == kay && a[2][i] == kay && a[3][i] == kay)
            return i;
    }
    return -1; 
}
int sameNumbersDia(const int a[][COL], const int SIZE, const int key){
    
    return -1; 
}
int sameNumbersInSUBDia(const int a[][COL], const int SIZE, const int key){
    
    return -1; 
}