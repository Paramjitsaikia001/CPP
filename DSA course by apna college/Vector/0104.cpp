#include<iostream>
#include<vector>
using namespace std;
int main(){
   vector<int> vec;

   vec.push_back(0);
   vec.push_back(1);
   vec.push_back(2);
   vec.push_back(3);
   vec.push_back(4);

   cout<<vec.size()<<endl;
   cout<<vec.capacity()<<endl;
   return 0;
}

/* static and dynamic memory allocation
vector is dynamic allocation run time execution
in the first vector size is 0
when we first push back then size is 1
in the next the (x2) multipy with 1 size that the size is 2
in the third the (x2) multipy with 2 size that the size is 4 
but the only 3 block are fill with 0,1,2 and 4th block is empty 
that's why the size is 3 and capacity is 4


at the last
----------------------------------
| 0 | 1 | 2 | 3 | 4 | 5 |  |  |  | 
----------------------------------
*/