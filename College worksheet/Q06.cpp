/*Define a class "string" with the following data members char *p, int size, and write member function to do the folowing (without using library function) and using dynamic memeory allocation.
length of the string
compare two string
copy one string to another
reverse the string
write suitable constructors and desctructors . also write a copy constructor for the clss.
*/


#include<iostream>
class string{
    char *p;
    int size;
    public:
    string(char name,int size){
        this->size = size;
        p = new char[name];
        p=&name;
    }
};