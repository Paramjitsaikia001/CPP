// convert a decimal to binary

#include <iostream>
using namespace std;
int dectodin(int n)
{
  int rim;
  int result = 0;
  int i = 1;
  while (n > 0)
  {
    rim = n % 2;
    result = result + rim * i;
    n /= 2;
    i *= 10;
  }
  return result;
}
int main()
{
  int n;
  cout << "enter a decimal no: ";
  cin >> n;
  cout << dectodin(n);
  return 0;
}