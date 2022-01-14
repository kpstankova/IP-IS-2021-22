#include <iostream>
#include <iomanip>
using namespace std;

void printMatrix(int** matrix, int size1, int size2) {
    for (int i = 0; i < size1; ++i) {
        for (int j = 0; j < size2; ++j) {
            cout << setw(2) << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int sum(int* matrix, int size) {
    if (size == 0) {
        return 0;
    }
    return matrix[0] + sum(matrix + 1, size - 1);
}

void swap(int*& a, int*& b) {
    int* temp = a;
    a = b;
    b = temp;
}

void sortMatrix(int** matrix, int n, int m) {
    for (int i = 0; i < n; ++i) {
        int sumRow = sum(matrix[i], m);
        for (int j = i + 1; j < n - 1; ++j) {
            int tempSum = sum(matrix[j], m);
            if (sumRow > tempSum) {
                sumRow = tempSum;
                swap(matrix[i], matrix[j]);
            }
        }
    }
}

void bubbleSort(int* arr, int size) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            if (arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {

    int n = 3, m = 4;
    int** matrix = new int*[n];
    for (int i = 0; i < n; ++i) {
        matrix[i] = new int[m];
    }
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            matrix[i][j] = 3 - i;
        }
    }

    printMatrix(matrix, n, m);
    sortMatrix(matrix, n, m);
    printMatrix(matrix, n, m);

    return 0;
}