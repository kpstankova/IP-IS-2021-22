#include <iostream>
#include <cmath>
using namespace std;

int main() {
    //Task 0
    cout << "Task 0:\n";
    cout << "Hello C++" << endl;

    //Task 1
    cout<< "Task 1:\n";
    int firstNumber, secondNumber, thirdNumber, result;
    cout << "firstNumber: ";
    cin >> firstNumber;
    cout << "secondNumber: ";
    cin >> secondNumber;
    cout << "thirdNumber: ";
    cin >> thirdNumber;
    result = firstNumber + secondNumber + thirdNumber;
    cout << "result: " << result << endl;

    //Task 2
    cout << "Task 2:\n";
    int x1, y1, x2, y2;
    double distance;
    cout << "Point 1: " << endl << "x = ";
    cin >> x1;
    cout << "y = ";
    cin >> y1;
    cout << "Point 2: " << endl << "x = ";
    cin >> x2;
    cout << "y = ";
    cin >> y2;

    distance = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    cout << "Result: " << distance << endl;

    //Task 3
    cout << "Task 3:\n";
    //int firstNumber, secondNumber; //Закоментирано е, тъй като по-горе сме ги декларирали вече.
    int temp;
    cout << "firstNumber: ";
    cin >> firstNumber;
    cout << "secondNumber: ";
    cin >> secondNumber;
    temp = firstNumber;
    firstNumber = secondNumber;
    secondNumber = temp;
    cout << "firstNumber: " << firstNumber << endl;
    cout << "secondNumber: " << secondNumber << endl;

    //How to swap two variables without using third variables
    firstNumber = firstNumber * secondNumber;    
    secondNumber = firstNumber / secondNumber;    
    firstNumber = firstNumber / secondNumber; 

    //Task 4
    cout << "Task 4:\n";
    int number, sum;
    cout << "Enter a three-digit number: ";
    cin >> number; 
    sum = number / 100 + number / 10 % 10 + number % 10;
    cout << "The sum of the digits is: " << sum << endl;

    //Homework
    cout << "\n\n\n===HOMEWORK===" << endl;

    //Task 1
    cout << "Task 1:\n";
    double n, m, a;
    int numberOfBlocks;
    cout << "n = ";
    cin >> n;
    cout << "m = ";
    cin >> m;
    cout << "a = ";
    cin >> a;

    numberOfBlocks = ceil(n / a) + ceil(m / a);
    cout << "Number of blocks: " << numberOfBlocks << endl;

    //Task 2
    cout << "Task 2:\n";

    double fahrenheit, celsius, kelvin;
    int choice;
    cout << "Fahrenheit: ";
    cin >> fahrenheit;
    cout << "Choose with 1, 2 or 3\n";
    cout << "1. to Celsius\n2. to Kelvin\n3. to both" << endl;
    cout << "choice: ";
    cin >> choice;

    if(choice == 1) {
        celsius = (fahrenheit - 32) * (5/9);
        cout << "celsius: " << celsius << endl;
    } else if(choice == 2) {
        celsius = (fahrenheit - 32) * (5/9);
        kelvin = celsius + 273.15;
        cout << "kelvin: " << kelvin << endl;
    } else {
        celsius = (fahrenheit - 32) * (5/9);
        kelvin = celsius + 273.15;
        cout << "celsius: " << celsius << endl;
        cout << "kelvin: " << kelvin << endl;
    }

}