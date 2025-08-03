/*
1 2 3 4 
1 2 3 4 
1 2 3 4 
1 2 3 4 
*/
#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for(i=1;i<5;i++)  //for row
    {
        for(j=1;j<5;j++)  //for columns
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
