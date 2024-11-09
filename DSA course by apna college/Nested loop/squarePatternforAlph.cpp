// print a square  pattern n number like if n=4 the pattern should be like
//  ABCD
//  ABCD
//  ABCD
//  ABCD
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "n: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        char ch = 'A';
        for (int j = 0; j < n; j++)
        {
            cout << ch;
            ch++;
        }
        cout << "\n";

        
    }
    return 0;
}