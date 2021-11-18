#include <iostream>
using namespace std;
// void isNumPalindrome (int num);

double biggerNum (double num1, double num2)
{
    return num1 > num2 ? num1 : num2;
}
void printPrimeNum(int inputNumLimit)
{
    for (int i = 2; i <= inputNumLimit; i++) 
    {      
        bool isPrime = true;
        for (int z = 2; isPrime && z<=i/2; z++)
        {
            if (i % z == 0)
            {
                isPrime = false;
                // break;
            }
        }
        if(isPrime)cout<<i<<" ";
    }
    cout << endl;
}
bool checkPrimeNumber (int a) {
    bool isPrime;
    for (int j = 2; j <= a/2; j++)
    {
        isPrime = true;
        if (a % j == 0)
        {
            return false;
        }
    }
    return true;
}

bool isNumPalindrome (int num)
{
    int temp =num;
    int revNum=0;
    while(temp != 0)
    {
        revNum = revNum * 10 + temp % 10;
        temp/=10;
    }
    // return revNum == num;
    if (revNum==num)
    {
        return true;
    }
    else return false;
}
void isPrimePalindrome(int num) {
    for (int i = 1, counter=0; counter <= num; i++) 
    {
        if(isNumPalindrome(i) && checkPrimeNumber(i)){
            cout<<i<<" ";
            counter++;
        }
    }
}

int main() {
    int num2 = 5;
    // cout << num2;
    // int inputNumLimit;
    // // cout << "Input a number: ";
    // // cin >> inputNumLimit;
    // checkPrimeNumber(num1);
    // do 
    // {
    //     cout << "Enter a valid number!";
    //     cin >> inputNumLimit; 
    // }
    // while (inputNumLimit < 2);
    // double bigger = biggerNum(num1, num2);
    // // cout << bigger << endl;
    // inputNumLimit *= inputNumLimit % 10;
    // printPrimeNum(inputNumLimit);
    // isPrimePalindrome(50);
 
    return 0;
}