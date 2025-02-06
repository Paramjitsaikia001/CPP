// pair sum
/*Q.given a shorted arrray and you need to return pair with target sum.*/

// #include <iostream>
// using namespace std;
// int main()
// {
//    int n = 4;
//    int arr[4] = {2, 7, 11, 15};
//    int target = 13;
//    int result[2];
//    for (int i = 0; i < n; i++)
//    {
//       for (int j = i; j < n; j++)
//       {
//          if (arr[i] + arr[j] == target)
//          {
//             result[0] = arr[i];
//             result[1] = arr[j];
//             for (int f = 0; f < 2; f++)
//             {
//                cout << result[f] << " ";
//             }
//          }
//       }
//    }
//    return 0;
// }



/*using vector*/
/*this is the BRUTE FORCE APPLICATION THE TIME COMPLEXITY IS 2*/
// #include <iostream>
// #include <vector>
// using namespace std;
// vector<int> PairSum(vector<int> nums, int target)
// {
//    vector<int> ans;
//    int n = nums.size();
//    for (int i = 0; i < n; i++)
//    {
//       for (int j = i + 1; j < n; j++)
//       {
//          if (nums[i] + nums[j] == target)
//          {
//             ans.push_back(nums[i]);
//             ans.push_back(nums[j]);
//             return ans;
//          }
//       }
//    }
//    return ans;
// }
// int main(){
//    vector<int> nums ={2,7,11,15};
//    int target =13;
//    vector<int> ans = PairSum(nums,target);
//    cout<<ans[0]<<" , "<<ans[1]<<endl;
//    return 0;
// }



/*now we going to use optimal application here the time complexcity in linear*/
#include<iostream>
#include<vector>
using namespace std;
vector<int> PairSum(vector<int> nums,int target){
   vector<int> ans;
   int n =nums.size();
   int i =0,j=n-1;
   while(i<j){
      int R_value = nums[i]+nums[j];
      if(R_value < target){
         i++;
      }
      else if(R_value >target){
         j--;
      }
      else {
         ans.push_back(nums[i]);
         ans.push_back(nums[j]);
         return ans;
      }
   }
      return ans;
}
int main(){
   vector<int> nums ={2,7,11,15};
   int target =18;
   vector<int>ans = PairSum(nums,target);
   cout<<ans[0]<<" "<<ans[1]<<endl;
   return 0;
}