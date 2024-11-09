//inverted triangle pattern like if n=4
/*
1 1 1 1
  2 2 2
    3 3
      4
*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "n: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
         for (int k = 0; k <i; k++)
        {
            cout <<" ";
        }
        for (int j = 0; j < n-i; j++)
        {
            cout << i+1;
        }
        cout << "\n";
    }
    return 0;
}