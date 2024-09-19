#include<iostream>
using namespace std;
int fun(int x,int y){
    return x+y;
}
float fun(float x,float y){
    return x+y;
}
int main(){
    int x=3.0;
    int y=4.0;
    cout<< fun(x,y);
    return 0;
}