// WAF to swap the max and min number of an array
#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
   int t = a;
   a = b;
   b = t;
}

int main()
{
   int size;
   cout << "enter the size of the array: ";
   cin >> size;
   int arr[size];
   cout << "enter the element of the array :";
   for (int i = 0; i < size; i++)
   {
      cin >> arr[i];
   }

   for (int i = 0; i < size; i++)
   {
      for (int j = i + 1; j < size - 1; j++)
      {
         if (arr[i] < arr[j])
         {
            arr[i] = arr[j];
         }
      }
   }
   // swap(arr[0],arr[size-1]);
   cout << "Final  array :";
   for (int i = 0; i < size; i++)
   {
      cout << arr[i] << endl;
   }
   return 0;
}