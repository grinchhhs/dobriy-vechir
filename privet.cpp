#include <iostream>
using namespace std;

int main() {
    long long z;
    cout << "введи любе число: ";
    if (!(cin >> z)) return 0;

    long long result;
    if (z > 0 && z % 2 == 0) {

        result = z / 2;
    } else {

        result = z * -1;
    }
    
    cout << result << endl;
    return 0;
 }