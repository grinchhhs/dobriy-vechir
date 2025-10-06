#include <iostream>
using namespace std;

int main() {
    int z;
    cout << "введи число z (0-5): ";
    cin >> z;

    switch (z) {
        case 1:
            z *= 2;
            break;
        case 3:
            z /= 2;
            break;
        default:
            z = z + 1;
            break;
}

    cout << "результатус: " << z << endl;
    return 0;
}