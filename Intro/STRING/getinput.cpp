#include<iostream>
#include<string>

using namespace std;
int main(){
    string firstname;
    cout<<"enter your first name: ";
    getline(cin,firstname);
    // cout<<firstname;
    string lastname;
    cout<<"enter the last name: ";
    cin>>lastname;
    cout<<firstname<<" "<<lastname;
    return 0;
}