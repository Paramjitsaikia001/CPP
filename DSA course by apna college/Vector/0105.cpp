#include <iostream>
#include <vector>
using namespace std;
class solution
{
public:
   int singleNumber(vector<int> &nums)
   {
      int ans =0;
      for(int val : nums)
      {
         ans = ans ^ val;
      }
      return ans;
   }
};
 int main(){
   solution sol;
   vector<int>num ={4,1,2,1,2};
   cout<<sol.singleNumber(num)<<endl;
   return 0;
 }