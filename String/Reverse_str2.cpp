#include<iostream>
#include<cstring>
using namespace std;

void reversestring(char name[])
{
    int start = 0;
    int end = strlen(name) - 1;

    while(start < end)
    {
        swap(name[start++], name[end--]);  // ✅ fixed here
    }
}

int main()
{
    char name[30];
    cout << "Enter the name: ";
    cin >> name;

    cout << "Your name is: " << name << endl;

    reversestring(name);  // reverse the name

    cout << "The reverse string is: " << name << endl;  // ✅ now shows the result

    return 0;
}
