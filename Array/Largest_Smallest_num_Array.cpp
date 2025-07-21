#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of Array:";
    cin>>n;

    int array[20];
    cout<<"Enter the Array Elements::";
    for (int i=0;i<n;i++)
    {
        cin>>array[i];
    }

    int max=array[0];
    int min=array[0];
    int maxindex=0;
    int minindex=0;
    
    for(int i=0;i<n;i++)
    {
        if (array[i]>max) 
        {
            max=array[i];
            maxindex=i;
        }

        if (array[i]<min)
        {
            min=array[i];
            minindex=i;
        }
    }

    cout<<"Largest Element in array is::"<<max<<"  at position "<<maxindex<<endl;
    
    cout<<"Smallest Element in array is::"<<min<<"  at position "<<minindex<<endl;

    return 0;
}