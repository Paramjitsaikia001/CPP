#include<iostream>
using namespace std;
class myclass{
    public:
    int myroll;
    string myname;
    
};
int main(){
    myclass myobj;
    myobj.myroll=3;
    myobj.myname="param";
    cout<<myobj.myroll<<"\n";
    cout<<myobj.myname<<"\n";
    return 0;
}
