//enter n numbers and find the solution and avarge of the number

#include<iostream>
using namespace std;
int main(){
    int n,num;
    float sum=0;
    cout<<"enter the total no: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"enter number: "<<i+1;
        cin>>num;
        sum+=num;
    }
    cout<<sum;
    return 0;
}