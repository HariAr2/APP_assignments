/*
Implement a subroutine program to reverse an array of integers in-place.
*/
#include <iostream>
using namespace std;

void RA2211003010002_reverseArray(int arr[], int size) {
    for (int start = 0, end = size - 1; start < end; start++, end--) {
        swap(arr[start], arr[end]);
    }
}

int main() {
    int size;
    cout << "Enter Array Size: ";
    cin >> size;
    int arr[size];

    cout << "Enter " << size << " integers:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    RA2211003010002_reverseArray(arr, size);

    cout << "Reversed Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}