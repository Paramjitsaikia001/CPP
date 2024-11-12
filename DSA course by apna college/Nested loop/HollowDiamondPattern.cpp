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
            cout << " ";
        }
        cout << "*";
        if (j > 0)
        {
            for (int k = 0; k < (2 * j - 1); k++)
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << "\n";
    }
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < i + 1; j++)
        { 
            cout << " ";
        }
        cout << "*";
        if (i < n-2)
        {
            for (int k = 0; k < n - (2 * i + 1); k++)
            {
                cout << " ";
            }
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