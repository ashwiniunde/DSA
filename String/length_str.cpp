#include<iostream>
using namespace std;

int getlength(char name[])
{
    int count=0;
    for(int i=0;name[i] != '\0';i++)
    {
        count++;
    }
    return count;
}
int main()
{
    char name[20];
    cout<<"Enter your name:: ";
    cin>>name;
    cout<<"Your Name is :";
    cout<<name<<endl;
    cout<<"The Length of the string is :"<<getlength(name)<<endl;
    return 0;
}