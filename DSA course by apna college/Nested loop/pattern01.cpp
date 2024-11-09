// print a shape like if n=4
/*
1
1 2
1 2 3
1 2 3 4
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
        for (int j = 0; j < i + 1; j++)
        {
            cout << j+1 <<" ";
        }
        cout << "\n";
    }
    return 0;
}