#include <iostream>
#include <cmath>
using namespace std;

int num(const char* str) { //123
    int number = 0;
    for (int i = 0; str[i] != '\0'; ++i) {
        number *= 10;
        number += str[i] - '0';
    }
    return number;
}

void printAlphabet(char a) {
    if (a > 'Z') {
        cout << endl;
        return;
    }
    cout << a << " ";
    printAlphabet(a + 1);
    cout << a << " ";
}

int main() {

    printAlphabet('A');

    return 0;
}