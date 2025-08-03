/*
1 
2 3 
3 4 5
4 5 6 7
5 6 7 8 9 
*/
#include<iostream>
using namespace std;
int main()
{
    int count=1;
    for(int i=1;i<=5;i++)
    {
        int value=i;
        for(int j=1;j<=i;j++)
        {
            cout<<value<<" ";
            value=value+1;
        }
        cout<<endl;
    }
    return 0;
}
