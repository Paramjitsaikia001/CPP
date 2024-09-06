#include<iostream>
using namespace std;
int main(){
    string food="pizza";
    string &meal=food;
    cout<<food<<"\n"<<meal<<endl<<&food;
    return 0;
}