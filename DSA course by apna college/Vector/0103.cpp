/*vector functions-
size - this return the size
push_back - add element at the end
pop_back - delete the last element
front - print the first element
back - print the last element
at - access a val of particular index
*/

#include <iostream>
#include <vector>
using namespace std;
int main()
{
   vector<char> name = {'p', 'a', 'r', 'a', 'm'};
   cout << "size - " << name.size() << endl;
   name.push_back('j');
   cout << "after push back size - " << name.size() << endl;
   name.pop_back();
   cout << "after pop back size - " << name.size() << endl;
   cout << "using the front function : " << name.front() << endl;
   cout << "using the back function : " << name.back() << endl;
   cout << "using the at function access index -1 element : " << name.at(1) << endl;
   for (char val : name)
   {
      cout << val << endl;
   }
   return 0;
}