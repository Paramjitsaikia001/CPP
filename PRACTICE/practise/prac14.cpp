// smallest and maximum number of array

#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "enter the size of the array: ";
    cin >> size;
    int arr[size];
    cout << "enter the element of the array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int largest_index, smallest_index;
    int smallest = INT_MAX;
    int largest = 0; // we can also write int largest=INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
            largest_index = i;
        }

        // largest = max(arr[i], largest); // max function can find the maximum value of two numbers
        if (arr[i] < smallest)
        {
            smallest = arr[i];
            smallest_index = i;
        }

        // smallest = min(arr[i], smallest); // min function can find the minimum value of two numbers
    }

    cout << "largest: " << largest << "  of index: " << largest_index << "\n " << " smallest: " << smallest << "   of index: " << smallest_index;
    return 0;
}