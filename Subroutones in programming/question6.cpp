/* 
Write a program that dynamically allocates memory for an array of integers based on user
input and then finds the sum of all elements in the array.
*/
#include <iostream>
using namespace std;

int main() {
    int *RA2211003010002_arr = nullptr;
    int RA2211003010002_size = 0;
    int RA2211003010002_input;
    
    cout << "Enter integers (enter -1 to stop): ";
    while (true) {
        cin >> RA2211003010002_input;
        if (RA2211003010002_input == -1) {
            break;
        }
        RA2211003010002_size++;
        RA2211003010002_arr = (int *)realloc(RA2211003010002_arr, RA2211003010002_size * sizeof(int));
        RA2211003010002_arr[RA2211003010002_size - 1] = RA2211003010002_input;
    }
    int RA2211003010002_sum = 0;
    for (int i = 0; i < RA2211003010002_size; i++) {
        RA2211003010002_sum += RA2211003010002_arr[i];
    }
    cout << "Sum of all element in the array: " << RA2211003010002_sum << endl;
    return 0;
}