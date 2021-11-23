#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

//TASK 1
bool isPrime(int n) {
    for (int i = 2; i < n / 2; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

void printCouplePrimes(int m, int n) {
    for (int i = m; i < n; ++i) {
        if (i == 1) {
            ++i;
        }
        for (int j = i + 1; j <= n; ++j) {
            if (isPrime(i) && isPrime(j) && i + 4 == j) {
                cout << i << " " << j << endl;
            }
        }
    }
}

//TASK 2
int printNFibonachi(int n) {
    int first = 0, second = 1, third = 1;
    if (n == 1 || n == 2) {
        return 1;
    }
    for (int i = 2; i < n; ++i) {
        third = first + second;
        first = second;
        second = third;
    }

    return third;
}

//TASK 3
double evaluateDiscount(double amount, double discount) {
    return amount - amount * discount / 100;
}

//TASK 4
void play() {
    srand(time(NULL));
    int generatedNumber = rand() % 10;

    int counter = 0;
    int guess;
    do {
        cout << "Enter your guess: ";
        cin >> guess;
        if (guess > generatedNumber) {
            cout << "DOWN" << endl;
        } else if (guess < generatedNumber) {
            cout << "UP" << endl;
        } else {
            cout << "CONGRANTS! You guessed the number." << endl;
            return;
        }
        ++counter;
    } while(counter != 3);
    cout << "You are out of guesses. SORRY!" << endl;
}

int main() {
    cout << "Task 1\n";
    printCouplePrimes(1, 20);
    cout << "Task 2\n";
    cout << printNFibonachi(5) << endl;
    cout << "Task 3\n";
    double amount, discount;
    do {
        cout << "Enter amount: ";
        cin >> amount;
    } while (amount <= 0);
    do {
        cout << "Enter discount: ";
        cin >> discount;
    } while (discount <= 0);
    cout << "New price is: " << evaluateDiscount(amount, discount) << endl;
    cout << "Task 4\n";
    play();


    return 0;
}