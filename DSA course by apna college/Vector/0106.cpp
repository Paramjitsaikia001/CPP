//find the subarray of an array

#include <iostream>
#include <vector>
using namespace std;
int main()
{
   int n = 5;
   int arr[5] = {1, 2, 3, 4, 5};
   for (int str = 0; str < n; str++)
   {
      for (int end = 0; end < n; end++)
      {
         for (int i = str; i <= end; i++)
         {
            cout << arr[i];
         }
         cout << " ";
      }
      cout << endl;
   }
   return 0;
}