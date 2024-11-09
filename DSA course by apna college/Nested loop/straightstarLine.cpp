//draw a n no of straight line of star

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no. of the lines: ";
    cin>>n;
    int x;
    cout<<"enter the stars in one line: ";
    cin>>x;
    for(int i=1;i<=n;i++){
        for(int j=0;j<=x;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}














