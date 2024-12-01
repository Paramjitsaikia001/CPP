#include <iostream>
using namespace std;
int main()
{
    int a = 3, b = 4;
    cout << "AND Operator :" << (a & b) << endl;
    cout << "OR Operator :" << (a | b) << endl;
    cout << "XOR Operator :" << (a ^ b) << endl;
    cout << "LEFT SHIFT << Operator :" << (10 << 1) << endl;// HERE 10 LEFT SHIFT TO 1 POSITION IN BIT
    cout << "RIGHT SHIFT >> Operator :" << (10 >>2) << endl;//HERE 10 RIGHT SHIFT TO 2 POSITON IN BIT
    return 0;
}