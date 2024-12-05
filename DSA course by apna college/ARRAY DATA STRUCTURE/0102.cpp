// reverse a array

#include <iostream>
using namespace std;
int main()
{
   int size;
   cout << "enter the size of array: ";
   cin >> size;
   int arr[size];
   cout << "enter the element of the array: ";
   for (int i = 0; i < size; i++)
   {
      cin >> arr[i];
   }
   int result[size];
   for (int i = 0; i < size; i++)
   {
      result[i] = arr[size-1-i];
      result[size-1-i]=arr[i];
      
   }
   cout << "the reverse array is : ";
   for (int i = 0; i < size; i++)
   {
      cout << result[i] << " ";
   }
}