// convert a binery number to decimal number

#include <iostream>
using namespace std;
int bintodec(int n)
{
    int rim;
    int result = 0;
    int i = 1;

    while (n > 0)
    {
        rim = n % 10;
        result = result + i * rim;
        i *= 2;
        n /= 10;
    }
    return result;
}
int main()
{
    int n;
    cout << "Enter a binary no: ";
    cin >> n;
    int i = n;
    while (i > 0)
    {
        if (i % 10 > 1)
        {
            cout << "this is not a binary number";
            return 0;
        }
        i /= 10;
    }
    cout << " decimal number of " << n << " is " << bintodec(n) << endl;
    return 0;
}