#include <iostream>
using namespace std;

void printArr(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void removeEquals(int arr[], int size, int k) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == k) {
            for (int j = i; j < size - 1; ++j) {
                arr[j] = arr[j + 1];
            }
            --size;
            --i;
        }
    }
    printArr(arr, size);
}

int main() {
    int arr[10] = {1, 2, 2, 3, 4, 2, 1, 2, 3, 2};
    removeEquals(arr, 10, 2);

    return 0;
}