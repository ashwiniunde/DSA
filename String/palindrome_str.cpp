#include<iostream>
#include<cstring>
using namespace std;

void reversestring(char name[])
{
    int start = 0;
    int end = strlen(name) - 1;
    while(start<end)
    {
        swap(name[start++], name[end--]);
    }
}
int main()
{
    char name[40];
    cout<<"Enter the name:";
    cin>>name;
    cout<<"Your name is : "<<name<<endl;

    char temp[40];
    strcpy(temp,name); // original name to temp array
    reversestring(temp);

    if (strcmp(name,temp) == 0)
    {
        cout<<"palindrome !!"<<endl;
    }
    else
    {
        cout<<"Not Palindrome !!"<<endl;
    }

    return 0;
}