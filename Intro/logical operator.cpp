//logical operator

#include<iostream>
using namespace std;
int main(){
    int x=5;
    cout << "logical AND "<<(x>3 && x<10);
    cout<<"\nlogical OR "<<(x>4 || x==6);
    cout<< "\nlogical reverse AND "<<!(x>3 && x<10);
    return 0;
}