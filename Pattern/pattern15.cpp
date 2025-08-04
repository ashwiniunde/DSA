/*
****
 ***
  **
   *

*/

#include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<=4;i++)
    {
        
        for(int space = i-1; space>0;space--) //for loop for printing the space
        {
            cout<<" ";
        }
        for(int j=1;j<=4-i+1;j++)
        {
            cout<<"*"<<"";
        }
        cout<<endl;
    }
}
