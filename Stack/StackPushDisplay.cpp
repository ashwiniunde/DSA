//A stack is a LIFO data structure → Last In, First Out
// Stack implementation using Array
#include<iostream>
using namespace std;
int stack[5],n=5;
    int top = -1; //starting the top value is -1

    // Push Function creation for adding ele in stack
void push(int x) //parameter
{
    if (top==n-1)
        cout<<"Stack is Full ."<<endl;
   else 
        {
            top++;
            stack[top]=x;
        }     
}

void display()
{
    if(top>=0)
    {
        cout<<"Stack Elements are::";
        for(int i=top;i>=0;i--)
        {
            cout<<stack[i]<<endl;
        }
    }
   else
    {
        cout<<"Stack is Empty...";
    }
}

int main()
{
    // push function call
    push(1);
    push(5);
    push(8);
    display();
}