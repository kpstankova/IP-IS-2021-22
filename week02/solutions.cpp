#include <iostream>
#include <cmath>
using namespace std;

int main() {
    //TASK 1
    cout << "Task 1\n";
    int first, second;
    cout << "Enter first number: ";
    cin >> first;
    cout << "Enter second number: ";
    cin >> second;
    if (first > second) {
        cout << "First number is bigger" << endl;
    } else if (first < second) {
        cout << "Second number is bigger" << endl;
    } else {
        cout << "The numbers are equal" << endl;
    }

    //TASK 2
    cout << "Task 2\n";
    int monthNumber;
    cout << "Enter a number: ";
    cin >> monthNumber;
    if (monthNumber >= 1 && monthNumber <= 12) {
        cout << "Month exists" << endl;
    } else {
        cout << "Month doesn't exist" << endl;
    }

    //TASK 3
    cout << "Task 3\n";
    double a, b, x;
    if (a >= b) {
        cout << "Incorrect interval" << endl;
    } else {
        if (x > a && x < b) {
            cout << "x is in the interval" << endl;
        } else if (x < a || x > b) {
            cout << "x is not in the interval" << endl;
        } else {
            cout << "x is one of the boarders" << endl;
        }
    }

    //TASK 4
    cout << "Task 4\n";
    char symbol;
    cout << "Enter a character: ";
    cin >> symbol;
    if ((symbol >= 'A' && symbol <= 'Z') || (symbol >= 'a' && symbol <= 'z')) {
        cout << "The symbol \'" << symbol << "\' is a letter" << endl;
    } else {
        cout << "The symbol \'" << symbol << "\' is not a letter" << endl; 
    }

    //TASK 5
    cout << "Task 5\n";
    double firstNumber, secondNumber;
    cout << "Enter first number: ";
    cin >> firstNumber;
    cout << "Enter second number: ";
    cin >> secondNumber;
    if (firstNumber * secondNumber < 0) {
        cout << "One of the numbers is negative" << endl;
    } else if (firstNumber * secondNumber == 0) {
        cout << "At least one of the numbers is zero" << endl; 
    } else {
        if (firstNumber < 0) {
            cout << "The numbers are negative" << endl;
        } else {
            cout << "The numbers are positive" << endl;
        }
    }

    //TASK 6
    cout << "Task 6\n";
    int month;
    cout << "Enter a number: ";
    cin >> month;
    if(month < 1 || month > 12) {
        cout << "Month not exists" << endl;
    } else if (month == 1) {
        cout << "January" << endl;
    } else if (month == 2) {
        cout << "February" << endl;
    } else if (month == 3) {
        cout << "March" << endl;
    } else if (month == 4) {
        cout << "April" << endl;
    } else if (month == 5) {
        cout << "May" << endl;
    } else if (month == 6) {
        cout << "June" << endl;
    } else if (month == 7) {
        cout << "July" << endl;
    } else if (month == 8) {
        cout << "August" << endl;
    } else if (month == 9) {
        cout << "September" << endl;
    } else if (month == 10) {
        cout << "October" << endl;
    } else if (month == 11) {
        cout << "November" << endl;
    } else if (month == 12) {
        cout << "December" << endl;
    }

    //TASK 7
    cout << "Task 7\n";
    int n, m, k;
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter m: ";
    cin >> m;
    cout << "Enter number of blocks that you want to cut: ";
    cin >> k;
    if (k > n * m) {
        cout << "You want too much blocks from this chocolate" << endl;
    } else {
        if (n % k == 0 || m % k == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    //TASK 8
    cout << "Task 8\n";
    int ax, bx, c;
    cout << "Enter three number: ";
    cin >> ax >> bx >> c;
    double d;
    if (ax == 0 || bx == 0 || c == 0) {
        cout << "This is not quadratic equation" << endl;
        return 0;
    }
    if (bx % 2 == 0) {
        d = (bx / 2) * (bx / 2) - ax * c;
    } else {
        d = bx * bx - 4 * ax * c;
    }
    double x1, x2;
    x1 = (bx * (-1) + sqrt(d)) / ax;
    x2 = (bx * (-1) - sqrt(d)) / ax;
    cout << "x1 = " << x1 << "x2 = " << x2 << endl;

    //TASK 9
    cout << "Task 9\n";
    double sum;
    int from, to;
    cout << "1 - BGN \n2 - USD \n3 - EUR\n4 - GBP\n";
    cout << "Choose currencies by entering the coresponding number\n";
    cout << "Enter <sum> <from currency> <to currency>: ";
    cin >> sum >> from >> to;

    if (sum < 0) {
        cout << "Invalid sum\n";
    } else {
        switch (from) {
            case 1: {
                switch (to) {
                    case 2: cout << sum * 0.59 << endl;
                    break;
                    case 3: cout << sum * 0.51 << endl;
                    break;
                    case 4: cout << sum * 0.43 << endl;
                    break;
                    default: cout << "Invalid number\n";
                    break;
                }
            }
            break;
            case 2: {
                switch (to) {
                    case 1: cout << sum * 0.59 << endl;
                    break;
                    case 3: cout << sum * 0.86 << endl;
                    break;
                    case 4: cout << sum * 0.73 << endl;
                    break;
                    default: cout << "Invalid number\n";
                    break;
                }
            }
            break;
            case 3: {
                switch (to) {
                    case 1: cout << sum * 1.96 << endl;
                    break;
                    case 2: cout << sum * 1.16 << endl;
                    break;
                    case 4: cout << sum * 0.84 << endl;
                    break;
                    default: cout << "Invalid number\n";
                    break;
                }
            }
            break;
            case 4: {
                switch (to) {
                    case 1: cout << sum * 2.32 << endl;
                    break;
                    case 2: cout << sum * 1.37 << endl;
                    break;
                    case 3: cout << sum * 1.18 << endl;
                    break;
                    default: cout << "Invalid number\n";
                    break;
                }
            }
            break;
            default: cout << "Invalid currency\n";
        }
    }

    return 0;
}