// palindrome

#include <iostream>
using namespace std;
class Solution
{
public:
    bool isPalindrome(int x)
    {
        long long ans = 0;
        int refX = x;
        if (x < 0 || x % 10 == 0)
            return false;

        else
        {
            while (refX > 0)
            {
                ans = ans * 10 + refX % 10;
                refX /= 10;
            }
        }
        return x == ans;
    }
};
int main()
{
    Solution s1;
    if (s1.isPalindrome(1234567899))
    {
        cout << "true";
    }
    else
        cout << "false";
    return 0;
}