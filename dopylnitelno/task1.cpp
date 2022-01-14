#include <iostream>
#include <iomanip>
using namespace std;
const int N = 10;

int** genMatrix(int matrix[][N], int size) {
    int** result = new int*[size];
    for (int i = 0; i < size; ++i) {
        result[i] = new int[size];
    }

    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if (matrix[i][j] % 2 == 0) {
                for (int k = 0; k < size; ++k) {
                    result[i][j] += matrix[i][k];
                }
            } else {
                for (int k = 0; k < size; ++k) {
                    result[i][j] += matrix[k][j];
                }
            }
        }
    }

    return result;
}

void printMatrix(int matrix[][10], int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cout << setw(3) << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void printMatrix2(int** matrix, int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cout << setw(3) << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int main () {
    int n;
    do {
        cout << "Enter n: ";
        cin >> n;
    } while (n < 0 || n > 10);

    int matrix[N][N];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }
    printMatrix(matrix, n);
    int** result = genMatrix(matrix, n);
    printMatrix2(result, n);

    // int t = 5;
    // int* a = &t;
    // cout << &t << " " << a << " " << *a << " " << &a << endl;

    return 0;
}