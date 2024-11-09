// print a shape like if n=4
/*
1
2 1
3 2 1
4 3 2 1
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
        for (int j = i+1; j > 0; j--)
        {
            cout << j <<" ";
        }
        cout << "\n";
    }
    return 0;
}