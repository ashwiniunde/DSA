//Bubble sort using Vector 
#include<bits/stdc++.h>
using namespace std;

void bubblesort(vector<int>& arr)
{
    int n=arr.size();
    bool swapped;
    for(int i=0; i<n-1;i++)
    {
        swapped = false;
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(!swapped)
        break;
    }
}

void printvector(vector<int>& arr)
{
    for (int num : arr)
    cout<< " "<<num; 
}
int main()
{
  vector<int> arr = { 64, 34, 25, 12, 22, 11, 90 };
  bubblesort(arr);
  cout<<"Sprted Array is:" ;
  printvector(arr);
  return 0;
}
