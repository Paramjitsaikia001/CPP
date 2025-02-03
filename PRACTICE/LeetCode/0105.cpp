#include <iostream>
using namespace std;
class complex
{
   float real, imag;

public:
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
   float rpart()
   {
      return real;
   }
   float ipart()
   {
      return imag;
   }
   friend ostream &operator<<(ostream &out, const complex &obj);
   friend istream &operator>>(istream &in, const complex &obj);
   friend complex operator+(const complex &c1, const complex &c2);
   friend complex operator*(const complex &c1, const complex &c2);
   friend complex operator-(const complex& c);
};
ostream &operator<<(ostream &out, const complex &obj)
{
   if (obj.imag <= 0)
   {
      out << obj.real << " - " << -obj.imag << "i";
   }
   else
   {
      out << obj.real << " + " << obj.imag << "i";
   }
   return out;
}
istream &operator>>(istream &in, const complex &obj)
{
   in >> obj.imag;
   in >> obj.real;
   return in;
}
complex operator+(const complex &c1, const complex &c2)
{
   return complex(c1.real + c2.real, c1.imag + c2.imag);
}
complex operator*(const complex &c1, const complex &c2)
{
   return complex(c1.real * c2.real - c1.imag * c2.imag, c1.real * c2.imag + c1.imag * c2.real);
}
complex operator-(const complex& c){
   return complex(-c.real,-c.imag);
}
int main(){
   complex c1(2,3),c2(3,5);
   complex add = c1+c2;
   cout<<"the addition : "<<add<<endl;
   complex multi = c1*c2;
   cout<<"the multiplication: "<<multi <<endl;
   cout<<"minus : "<< -c1<<endl;
   return 0;
}