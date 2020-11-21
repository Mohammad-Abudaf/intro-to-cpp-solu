#include <iostream>

using namespace std;

void solveEquation(double a, double b, double c, double d, double e, double f, double &x, double &y, bool &isSolvable){
    if(isSolvable){
        x = (e*d - b*f)/(a*d-b*c);
        y = (a*f - e*c)/(a*d - b*c);
        cout << "x is " << x << endl;
        cout << "y is " << y << endl;
    } else {
        cout << "its not solvable! ";
    }
}

int main(){
    // welcome massage!
    cout << "hi, human!" << endl;
    cout << "solving equation of two variables" << endl;

    double a, b, c, d, e, f; // declare variables
    // get data from user!
    cout << "enter a: "; cin >> a;
    cout << "enter b: "; cin >> b;
    cout << "enter c: "; cin >> c;
    cout << "enter d: "; cin >> d;
    cout << "enter e: "; cin >> e;
    cout << "enter f: "; cin >> f;
    double x = 0, y = 0;

    // check if wh can solve these equations!
    bool isSolvable = a * d - b * c != 0;

    //display the results!
    solveEquation(a,b,c,d,e,f,x,y, isSolvable);

    return 0;
}