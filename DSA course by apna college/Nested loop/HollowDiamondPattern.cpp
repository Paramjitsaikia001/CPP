/*print a hollow diamond pattern like

     *
   *   *
 *        *
   *   *
     *
  */

#include <iostream>
using namespace std;
void hollowdiamond(int n)
{
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < (n - j - 1); i++)
        {
            cout << "_";
        }
        cout << "*";
        for (int k = n; k < n-k; k--)
        {
            cout << "_";
        }
        if (j > 0)
        {
            cout << "*";
        }
        cout << "\n";
    }
}
int main()
{
    hollowdiamond(4);
    return 0;
}