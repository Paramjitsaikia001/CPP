// majority element
/*using brute force*/
// #include <iostream>
// #include <vector>
// using namespace std;
// vector<int> MJ(vector<int> nums)
// {
//    vector<int> ans;
//    int count = 0;
//    int n = nums.size();
//    for (int i = 0; i < n; i++)
//    {
//       for (int j = 0; j < n; j++)
//       {
//          if (nums[i] == nums[j])
//          {
//             count++;
//          }
//       }
//       if (count > n / 2)
//       {
//          ans.push_back(nums[i]);
//          return ans;
//       }
//    }
//    return ans;
// }
// int main(){
//    vector<int> nums ={1,2,2,1,1};
//    vector<int> ans = MJ(nums);
//    cout<<ans[0]<<endl;
//    return 0;
// }




/*optimize */
/*using sorting*/
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// class solution
// {
// public:
//    int MJ(vector<int> nums)
//    {
//       int n = nums.size();
//       sort(nums.begin(), nums.end());
//       int freq = 1, ans = nums[0];
//       for (int i = 0; i < n; i++)
//       {
//          if (nums[i] == nums[i + 1])
//          {
//             freq++;
//          }
//          else{
//            freq =1;
//            ans =nums[i]; 
//          } 
//       if(freq>n/2){
//          return ans;
//       }
//       }
//       return ans;
//    }
// };
// int main()
// {
//    solution sol;
//    vector<int> nums = {1, 2, 2, 1, 1, 1};
//    cout<<sol.MJ(nums);
//    return 0;
// }




/*moore's voting algorithum*/

#include<iostream>
#include<vector>
using namespace std;
class solution{
   public:
   int MJ(vector<int> nums){
      int frq=0,ans=nums[0];
      for(int i =0;i<nums.size();i++){
         if(frq == 0){
            ans=nums[i];
         }
         if(ans == nums[i]){
            frq ++;
      }else {
         frq--;
      }

      }
      return ans;
   }
};
int main(){
solution sol;
vector<int> nums ={1,2,2,1,1};
cout<< sol.MJ(nums)<<endl;
return 0;
}