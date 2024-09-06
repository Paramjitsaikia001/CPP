// find the max and minimum and avegare of the array

#include <iostream>
using namespace std;
int main() {
  int array[5] = {3, 4, 5, 2, 7};
  for (int i = 0; i < 5 - 1; i++) {
    for (int j = 0; j < (5 - i - 1); j++) {
      if (array[j] > array[j + 1]) {
        int t = array[j];
        array[j] = array[j + 1];
        array[j + 1] = t;
      }
    }
  }
  int min = array[0];
  int max = array[4];
  float sum = 0;
  for (int i = 0; i < 5; i++) {
    sum += array[i];
  }
  float avg = sum / 5;
  cout << "the max is : " << max;
  cout << "\nthe minimum is:  " << min;
  cout<<"\nthe sum is "<<sum;
  cout << "\nthe average is:  " << avg;
  return 0;
}