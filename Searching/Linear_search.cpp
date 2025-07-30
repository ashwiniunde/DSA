// Linear Search
#include<iostream>
using namespace std;
int main()
{
    int arr[20],n;
    cout<<"Enter the number of element;";
    cin>>n;
    cout<<"Enter the Array Elements::";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }   
   int key;
   bool found = false;

    cout<<"Enter the array Element which you want to search::";
    cin>>key;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            cout<<"Element Found !! ";
            found= true;   // element found
            break;
        }
       
    }
    if(!found)
    {
        cout<<"Element not found ";
    }
}
