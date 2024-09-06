#include <iostream>
using namespace std;

// Function to reverse a part of the array
void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int d;
    cout << "Enter the number of rotations: ";
    cin >> d;

    // Ensure the rotations do not exceed the array size
    d = d % n;

    // Reverse the first part
    reverse(arr, 0, d - 1);

    // Reverse the second part
    reverse(arr, d, n - 1);

    // Reverse the whole array
    reverse(arr, 0, n - 1);

    cout << "The final rotated array is: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
