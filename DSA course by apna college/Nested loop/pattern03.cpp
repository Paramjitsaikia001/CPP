// print a floyd's triangle pattern like if n=4
/*
1
2 3
4 5 6
7 8 9 10
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "n: ";
    cin >> n;
    int num=1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << num <<" ";
            num++;
        }
        cout << "\n";
    }
    return 0;
}