#include <iostream>
using namespace std;
class string_
{
   int size;
   char *p;

public:
   // constructor
   string_(int s = 20)
   {
      size = s;
      p = new char[size];
   }

   // copy constructor
   string_(const string_ &obj)
   {
      size = obj.size;
      p = new char[size];
      for (int i = 0; i < size; i++)
      {
         p[i] = obj.p[i];
      }
   }

   // compare two string
   void compare(const string_ &obj)
   {
      for (int i = 0; i < size; i++)
      {
         if(size == obj.size)
         {
            return ;
         }
         
      }
   }
   // reverse
   void reverse()
   {
      for (int i = 0; i < size; i++)
      {
         int t = p[0];
         p[0] = p[size - 1];
         p[size - 1] = t;
      }
   }
   // destructor
   ~string_()
   {
      delete[] p;
   }

   // input
   void getInput()
   {
      cout << "enter the size: ";
      cin >> size;
      cout << "enter the string: ";
      for (int i = 0; i < size; i++)
      {
         cin >> p[i];
      }
   }

   // output
   void display()
   {
      for (int i = 0; i < size; i++)
      {
         cout << p[i];
      }
      cout << "\n";
   }
};
int main()
{
   string_ s;
   s.getInput();
   s.display();
   string_ copy(s);
   cout << "the copy of entered string: ";
   copy.display();
   s.reverse();
   cout << "the reverse of entered string: ";
   s.display();
   return 0;
}