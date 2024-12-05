// WAF to calculare sum and product of all numbers in an array

#include <iostream>
using namespace std;

void sum(int arr[], int size)
{
   int sum = 0;
   for (int i = 0; i < size; i++)
   {
      sum += arr[i];
   }
   cout << sum<<endl;
}

void product(int arr[], int size)
{
   int product = 1;
   for (int i = 0; i < size; i++)
   {
      product *= arr[i];
   }
   cout << product<<endl;
}

int main(){
   int size;
   cout<<"enter the size of the array: ";
   cin>>size;
   int arr[size];
   cout<<"enter the element of the array :";
   for(int i =0;i<size;i++){
      cin>>arr[i];
   }
   cout<<"sum of all numbers : ";
   sum(arr,size);
   cout<<"product of all numbers: ";
   product(arr,size);
   return 0;
}