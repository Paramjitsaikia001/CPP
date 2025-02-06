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
#include<iostream>
#include<vector>
using namespace std;
class solution{
   public:
   int MJ(vector<int> nums){
      int n =nums.size();
      sort(nums.begin(),nums.end());
   }
}
int main(){

}