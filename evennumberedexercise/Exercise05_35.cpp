#include <iostream>

using namespace std;

int main() {
    int n1 = 0;
    int n2 = 1;
    int n = n1 + n2;
    cout << n1 << "  " << n2 << "  ";
    for (int n = 2; n <= 10; ++n) {
        n = n2 + n1;
        cout << n << "  ";
        n1 = n2;
        n2 = n;
    }
    return 0;
}
