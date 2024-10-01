#include<iostream>
using namespace std;
class num{
    int value;
    public:
    num(int v){
        value =v;
    }
    friend num operator-(num& other);
    friend ostream& operator<<(ostream& out,num &other);
};
num operator-(num& other){
    return num(-other.value);
}
ostream& operator<<(ostream& out,num &other){
    out<<other.value;
    return out;
}
int main(){
    num n1(20);
    num n2=-n1;
    cout<<n2;
    return 0;
}
