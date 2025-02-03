#include <iostream>
using namespace std;
class complex
{
    float real, imag;

public:
    float rpart()
    {
        return real;
    }
    float ipart()
    {
        return imag;
    }
    complex()
    {
        real = imag = 0;
    }
    complex(float a)
    {
        real = imag = a;
    }
    complex(float a, float b)
    {
        real = a;
        imag = b;
    }
    complex add(const complex &obj)
    {
        return complex(real + obj.real, imag + obj.imag);
    }
    complex multi(const complex &obj)
    {
        return complex(real * obj.real - imag * obj.imag, real * obj.imag + imag * obj.real);
    }
    void display()
    {
        if (imag <= 0)
        {
            cout << real << " - " << imag << "i" << endl;
        }
        else
            cout << real << " + " << imag << "i" << endl;
    }
};
int main()
{
    complex c1(2, 3), c2(1, 9);
    c2.add(c1).display();
    complex add = c1.multi(c2);
    add.display();
}