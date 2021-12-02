#include <iostream>
#include <cmath>
using namespace std;

int transformNumber(int number, int k) {
    int copyNumber = number;
    int size = 0;
    while (copyNumber > 0) {
        copyNumber /= 10;
        ++size;
    }
    
    for(int i = 0; i < size; ++i) {
        int changedDigit = number % (int)pow(10, i + 1) / (int)pow(10, i);
        changedDigit = changedDigit * k > 9 ? (changedDigit * k) / 10 : changedDigit * k;
        copyNumber += changedDigit * (int)pow(10, i);
    }

    return copyNumber;
}

int main() {

    cout << transformNumber(12975, 4) << endl;

    return 0;
}