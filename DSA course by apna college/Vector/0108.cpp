// kadane's algorithm
// find the subarray sum of an array

#include <iostream>
#include <vector>
using namespace std;
class solution
{
public:
   int maxSubarray(vector<int> nums)
   {
      int Currsum = 0, MaxSum = INT_MIN;
      for (int val:nums)
      {
         Currsum += val;
         MaxSum = max(Currsum, MaxSum);
         if (Currsum < 0)
         {
            Currsum = 0;
         }
      }
      return MaxSum;
   }
};
int main()
{
   solution sol;
   vector<int> nums ={3, -4, 5, 4, -1, 7, -8};
   cout<<sol.maxSubarray(nums)<<endl;
   return 0;
}