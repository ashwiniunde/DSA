/*
    *
   **
  ***
 ****

*/

#include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<=4;i++)
    {
        for(int space = 4-i;space>0;space--) //for loop for printing the space
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}