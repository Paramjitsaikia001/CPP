#include <iostream>
#include <vector>
using namespace std;
class solution
{

public:
    vector<int> twosum(vector<int> &nums, int target)
    {
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++)
        {
            if ((nums[i] + nums[i + 1]) == target)
            {
                ans[0] = nums[i];
                ans[1] = nums[i + 1];
            }
        }
        return ans;
    }
};
int main()
{
    solution s1[10];
    for (int i = 0; i < 6; i++)
    {
        cin >> s1[i];
    }
    twosum(s1,2);
}