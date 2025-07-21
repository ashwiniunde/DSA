// array is collection of same type of data
// store in contiguos memory 
//array is linear data structure
//Array Index 0 to n-1
#include<iostream>
using namespace std;
int main()
{
    int array[5] = {1,2,3,4,5}; 
    cout<<array[0]<<endl; //print ele at 0th position
    cout<<array[1]<<endl;
    cout<<array[3]<<endl;
    cout<<array[4]<<endl;
    array[4] = 100 ; //updating value at 4th position
    cout<<array[4]; // updated as 100
   
    return 0;
}