/*
D 
C D
B C D
A B C D
*/
#include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<=4;i++)
    {
        char start ='A'+4-i;
        for(int j=1;j<=i;j++)
        {
            cout<<start<<" ";
            start=start+1;
        }
        cout<<endl;
    }
    return 0;
}