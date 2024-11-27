/*write a class based program implementing static members*/
#include <iostream>
using namespace std;
class person
{
public:
    static int age;
    void display()
    {
        cout << age;
    }
};
int main()
{
    person p1;
    p1.age = 10;
    p1.display();
    // p1.age =12;
    // cout<<p1.age<<endl;

    return 0;
}