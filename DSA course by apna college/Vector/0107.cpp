// find the maximum subarray sum
// this the brute force approach
#include <iostream>
#include <vector>
using namespace std;
int main()
{
   int n = 7;
   int arr[7] = {3, -4, 5, 4, -1, 7, -8};

   int maxsum = INT_MIN;
   for (int str = 0; str < n; str++)
   {
      int Cursum = 0;
      for (int end = str; end < n; end++)
      {
         Cursum += arr[end];
         maxsum = max(Cursum, maxsum);
      }
   }
   cout << "the maximum subarray sum is : " << maxsum;
   return 0;
}