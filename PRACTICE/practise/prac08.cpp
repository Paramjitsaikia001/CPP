#include <iostream>
using namespace std;

class Employee {
  private:
    int salary;

  public:
    void setSalary(int s) {
      salary = s;
    }
    int getSalary() {
      return salary;
    }
};

int main() {
  Employee myObj;
  int s;
  cout<<"enter your salary";
  cin>>s;
  myObj.setSalary(s);
  cout << myObj.getSalary();
  return 0;
}
