#include <iostream>
using namespace std;

int findNumberOfInversions(int arr[], int size) {
    int inversions = 0;

    for (int i = 0; i < size; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if (arr[i] > arr[j]) {
                ++inversions;
            }
        }
    }

    return inversions;
}

int main() {
    int arr[5] = {11, 12, 13, 14, 15};
    int arr1[6] = {5, 4, 3, 2, 1, 0};
    cout << findNumberOfInversions(arr, 5) << endl;
    cout << findNumberOfInversions(arr1, 6) << endl;

    return 0;
}