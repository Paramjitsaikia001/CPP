#include<iostream>
using namespace std;
class myclass{
    int count=1;
    public:
    // // myclass(){
    //     count++;
    //     cout<<"object"<<count<<"created";
    // }
    ~myclass()//destructor
    {
        cout<<"object"<<count<<"destroyed";
        count--;

    }
};
int main(){
    myclass t1,t2,t3,t4;
    return 0;
}