#include <iostream>
using namespace std;

double findSum(double *arr, int size)
{
    if (size == 1)
    {
        return 0;
    }
    if (arr[0] > arr[1] && arr[0] >= 0)
    {
        return arr[0] + findSum(arr + 1, size - 1);
    }
    return findSum(arr + 1, size - 1);
}

int fib(int n)
{
    if (n == 0 || n == 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}
bool poli(char str[], int i, int j) //abba //aba
{
    if (i >= j)
    {
        return true;
    }

    if (str[i] != str[j])
    {
        return false;
    }

    return poli(str, i + 1, j - 1);
}

double findSumRec(double *arr, int size)
{
    if (size == 0)
        return 0;

    return arr[0] + findSumRec(arr + 1, size - 1);
}

bool checkOrder(double *arr, int size) // 1 2 3 4 4 5 4 3
{
    if (size == 1)
    {
        return true;
    }
    if (arr[0] > arr[1])
    {
        return false;
    }
    return checkOrder(arr + 1, size - 1);
}

// bool isSorted(double *array, int size) {
//     for (size_t i = 0; size != 1; i++, --size)
//     {
//         if (array[i] > array[i + 1]) {
//             cout << "false" << endl;
//             return false;
//         }
//     }
//     return true;
// }

bool isPoweOfTwo(int n)
{
    if (n == 1) {
        return true;
    }

    if(n % 2 != 0) {
        return false;
    }

    return isPoweOfTwo(n/2);
}

double min(double *array,double minn,int size)
{
    if(size==0)
    {
        return minn;
    }
    if(array[1]<minn)
    {
        minn=array[1];
    }
    return min(array+1,minn,size-1);
}

int main()
{
    double array[7] = {2, 3, 1.1, 3.5, 1, 4, 8.3};
    // cout << findSum(array, 7) << endl;

    // int n;
    // cin >> n;
    // cout << fib(n) << endl;
    // char *arr = new char[0];
    // // cin.getline(arr, 8);
    // cout << boolalpha << poli(arr, 0, 0) << endl;

    // cout << findSumRec(array, 7) << endl;

    // cout << boolalpha << checkOrder(array, 7) << endl;
    // cout << boolalpha << isPoweOfTwo(2) << endl;
    cout << min(array, array[0], 7) << endl;

    int*** test = new int**[3];
    for (int i = 0; i < 3; ++i) {
        test[i] = new int*[3];
        for (int j = 0; j < 3; ++j) {
            test[i][j] = new int[3];
        }
    }
    // int *test[3]= new int [3];

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            delete[] test[i][j];
        }
        delete[] test[i];
    }
    delete[] test;
    
    return 0;
}

//2 + 3.5 + 1 + 0 = 6.5