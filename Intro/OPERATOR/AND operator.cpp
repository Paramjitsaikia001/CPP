//AND bitwise operator

#include<iostream>
using namespace std;
int main(){
    int x=5;
     x &=3;
cout<<"the final result is "<<x;
return 0;//output is 1 how it work: 5=101 and 3=011 . performing bitwise AND operation between 5 and 3 the result is 001 =1
}