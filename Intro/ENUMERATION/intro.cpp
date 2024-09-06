#include<iostream>
using namespace std;
enum level{
    LOW,
    MEDIUM,
    HIGH=20

};
enum steps{
    step1=1,
    step2,
    step3
};
int main(){
    enum level myvar=MEDIUM;
    enum level myvar2=HIGH;
    enum steps mystep=step2;
    cout<<myvar<<"\n"<<myvar2<<endl<<mystep;
    return 0;

}