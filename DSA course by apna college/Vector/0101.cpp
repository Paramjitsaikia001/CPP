//this is data structure array like . it have different block where we store data and it has indexes . they are dynamic in nature they donot have any fixed size it can be change 
//STL- standard template library 
/*vector syntax - 

vector<int>vec
vector<int>vec={1,2,3}
vector<int>vec(3,0) -> first index represent the size of vector and second index represent the value*/
#include<iostream>
#include<vector>
using namespace std;
int main(){
   // vector<int> vec={1,2,3};//size =0;
   // cout<<vec[0]<<endl;
   // cout<<vec[1]<<endl;
   // cout<<vec[2]<<endl;
   vector <int> vec1(5,0);
   cout<<vec1[0]<<endl;
   cout<<vec1[1]<<endl;
   cout<<vec1[2]<<endl;
   cout<<vec1[3]<<endl;
   cout<<vec1[4]<<endl;

   return 0;
}