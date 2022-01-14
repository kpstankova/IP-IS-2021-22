#include <iostream>
using namespace std;

void printStars(int n) {
    if (n == 0) {
        cout << endl;
        return;
    }
    cout << '*';
    printStars(n - 1);
}

void print(int m, int n) {
    if (m > n) {
        return;
    }
    printStars(m);
    print(m + 1, n);
    printStars(m - 1);
}

int main() {

    // printStars(5);
    print(1, 5);
    
    return 0;
}