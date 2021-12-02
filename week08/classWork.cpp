#include <iostream>
#include <ctime>
#include <random>
#include <cstdlib>
using namespace std;

void printArr(int arr[],int count)
{
    for(int i = count - 1; i >= 0; i--)
    {
        cout << arr[i];
    }
    cout << endl;
}

void task11(int firstNum, int k)
{
    int temp, count = 0;

    temp = firstNum;
    while(temp != 0)
    {
        count++;
        temp = temp / 10;
    }

    int arr[count];

    for(int i = 0; i < count; i++)
    {
        arr[i] = (firstNum % 10) + k;
        if( arr[i] >= 10)
        {
            arr[i] = arr[i] % 10;
        }
        firstNum /= 10;
    }

    printArr(arr, count);
}

void task12 (int number, int k)
{
    int copy = number;
    int count = 0;
    while(copy != 0)
    {
        count++;
        copy /= 10;
    }
    int array[count];
    for (int i = 0; i < count; i++)
    {
        array[i] = number % 10;
        number /= 10;
    }
    for (int i = 0; i < count; i++)
    {
        array[i] = array[i] * k;
        if (array[i] > 9)
        {
            array[i] = array[i] / 10;
        }
    }
    printArr(array, count);
}

void task21() {
    int dices[5];
    bool combinations[6]; //[0] -> 1, [1] -> 2 ...
    for (int i = 0; i < 6; ++i) {
        combinations[i] = false;
    }
    int countRolls = 0;

    srand(time(NULL));

    while(true) {
        ++countRolls;
        for (int i = 0; i < 5; ++i) {
            dices[i] = rand() % 6 + 1; // 1, 2, 3, 4, 5, 6
        }
        printArr(dices, 5);
        int counter[6]; // 0++, 1++ ...
        for (int i = 0; i < 6; ++i) {
            counter[i] = 0;
        }

        for (int i = 0; i < 5; ++i) {
            // ++counter[dices[i] - 1];
            int index = dices[i] - 1;
            counter[index]++;
        }

        for (int i = 0; i < 6; ++i) {
            if (counter[i] >= 3) {
                combinations[i] = true;
                break;
            }
        }

        bool flag = true;
        for (int i = 0; i < 6; ++i) {
            if (combinations[i] == false) {
                flag = false;
                break;
            }
        }

        if (flag) { // 1 6 2 3 4 5
            break;
        }
    }

    cout << "You roll " << countRolls << " times the dices" << endl;
}

void task22() {
    int dices[5];
    int countRolls = 0;
    int countCombinations = 0;

    srand(time(NULL));

    while(true) {
        ++countRolls;
        for (int i = 0; i < 5; ++i) {
            dices[i] = rand() % 6 + 1; // 1, 2, 3, 4, 5, 6
        }
        printArr(dices, 5);
        int counter[6]; // 0++, 1++ ...
        for (int i = 0; i < 6; ++i) {
            counter[i] = 0;
        }

        for (int i = 0; i < 5; ++i) {
            // ++counter[dices[i] - 1];
            int index = dices[i] - 1;
            counter[index]++;
        }

        bool flag = false;

        for (int i = 0; i < 6; ++i) {
            if (counter[i] >= 3) {
                ++countCombinations;
                flag = true;
            }
        }

        if (!flag) { // 1 6 2 3 4 5
            countCombinations = 0;
        }

        if (countCombinations == 3) {
            break;
        }
    }

    cout << "You roll " << countRolls << " times the dices" << endl;
}
void fillArr(int arr[], int n){
    int num;
    cout << "enter array"<< endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
}
void print(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void task31(int arr[], int n , int k){ //3 4 5 23 4 -> 3 5 23
    for(int i = 0; i < n ; i++){
        if(arr[i] == k){
            for (int j = i; j < n; j++){
                arr[j] = arr[j + 1];
            }
            n--;
            --i;
        }
    }
    print(arr, n);
}

void task32(int array[], int n)
{
    int counterInverses=0;
    for (int i=0; i<n; i++)
    {
        for(int j= i+1; j<n; j++){
            if(array[i]>array[j]) counterInverses++;
        }
    }
    cout<<" "<<counterInverses<<endl;
}

// void inverses1(int array[], int n)
// {
//     int counterInverses=0;
//     for (int i=0; i<n; i++)
//     {
//         for(int j=1; j<n; j++){
//             if(array[i]>array[j] &&  i<j) counterInverses++;
//         }
//     }
//     cout<<" "<<counterInverses<<endl;
// }

int main() {
    // task11(12975, 4);
    // task12(12975, 4);
    // task21();
    // task22();
    int arr[6] = {5, 4, 3, 2, 1, 0};
    // task31(arr, 10, 2);
    task32(arr, 6);   

    return 0;
}