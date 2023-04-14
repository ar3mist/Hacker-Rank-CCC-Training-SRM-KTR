#include <iostream>
using namespace std;

int main() {
    int X, Y;
    cin >> X >> Y;

    if (X == Y) {
        cout << "Did not participate" << endl;
    }
    else if (X < Y) {
        cout << "Performed well" << endl;
    }
    else {
        cout << "Did not perform well" << endl;
    }
    return 0;
}