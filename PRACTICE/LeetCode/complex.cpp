#include <iostream>
using namespace std;
class complex
{
    double real;
    double imag;

public:
    complex()
    {
        real = imag = 0;
    }
    complex(double a)
    {
        real = imag = 0;
    }
    complex(double a, double c)
    {
        real = a;
        imag = c;
    }
    complex add(const complex &com1, const complex &com2)
    {
        return complex(com1.real + com2.real, com1.imag + com2.imag);
    }
    friend void display(const complex &result);
};
void display(const complex &result)
{
    cout << result.real << " + " << result.imag << " i ";
}
int main()
{
    complex c1(2, 2), c2(3, 4);
    complex c3 = c3.add(c1, c2);
    display(c3);
    return 0;
}