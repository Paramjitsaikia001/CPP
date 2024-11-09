//print a square  pattern n number like if n=4 the pattern should be like 
// 1234
// 1234
// 1234
// 1234

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"n : ";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int i=1;i<=n;i++){
            cout<<i;
        }
        cout<<"\n";
    }
    return 0;
}