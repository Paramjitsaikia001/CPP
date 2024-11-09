// print a pyramid pattern if n=4
/*
       1
     1 2 1
   1 2 3 2 1
 1 2 3 4 3 2 1
*/

#include <iostream>
using namespace std;

void pyramid(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < n - (i + 1); k++)
        {
            cout << " ";
        }
        for (int j = 0; j < i + 1; j++)
        {
            cout << j + 1;
        }
        for (int j = 1; j < i + 1; j++)
        {
            cout << i + 1 - j;
        }
        for (int k = 0; k < n - (i + 1); k++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cout << "n: ";
    cin >> n;
    pyramid(n);
    return 0;
}