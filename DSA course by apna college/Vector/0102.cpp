#include<iostream>
#include<vector>
using namespace std;
int main(){
   vector<char> vec = {'a','b','c','d'};
for(char val : vec)// for each 
{
   cout<<val <<endl;
}
return 0;
}