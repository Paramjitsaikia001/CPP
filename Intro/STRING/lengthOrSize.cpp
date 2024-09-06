//length and size of string

#include<iostream>
using namespace std;
int main(){
    string word;
    cout<<"enter any word: ";
    cin>>word;
    cout<<"the length of your word using .length(): "<<word.length();
    cout<<"\nthe length of your word using .size(): "<<word.size();
    return 0;
}