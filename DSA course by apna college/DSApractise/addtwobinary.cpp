// add two binary number

#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    int count1 = 0, count2 = 0;
    int rim1, rim2;
    int result = 0;
    cout << "enter the first no :";
    cin >> num1;
    cout << "enter the second no: ";
    cin >> num2;
    while (num1 > 0)
    {
        rim1 = num1 % 10;
        count1++;
        if (rim1 > 1 || rim1 < 0)
        {
            cout << "this is not a binary number! ";
            return 1;
        }
        num1 /= 10;
    }
    while (num2 > 0)
    {
        rim2 = num2 % 10;
        count2++;
        if (rim2 > 1 || rim2 < 0)
        {
            cout << "this is not a binary number! ";
            return 1;
        }
        num2 /= 10;
    }

    int maxcount;
    if (count1 > count2)
    {
        maxcount = count1;
    }
    else if(count1 < count2)
    {
        maxcount = count2;
    }
    else
    maxcount= count1;

    while (maxcount > 0)
    {
        rim1 = num1 % 10;
        rim2 = num2 % 10;
        if (rim1 == 1 && rim2 == 1)
        {
            result = 10;
        }
        else if ((rim1 == 1 && rim2 == 0) || (rim1 == 0 && rim2 == 1))
        {
            result = 1;
        }
        else
        {
            result = 0;
        }
    }
    cout << "the result is: " << result << "\n";

    return 0;
}