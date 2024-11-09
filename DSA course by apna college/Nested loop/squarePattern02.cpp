//print a pattern like this 
// 123
// 456
// 789

#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"n : ";
    cin>>n;

    //my version
    // for( i=0;i<n;i++){
    //     for(j=i*n;j<(i+1)*n;j++ ){
    //         cout<<j+1;
    //     }
    //     cout<<endl;
    // }


    //shardha khapra version
    int num =1;
     for( i=0;i<n;i++){
        for(j=i*n;j<(i+1)*n;j++ ){
            cout<<num;
            num++;
        }
        cout<<endl;
    }
    return 0;
}