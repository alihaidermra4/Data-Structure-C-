#include <iostream>
using namespace std;
class stack
{
    int A[10];
    int top;
    public:
    stack():top(-1)
    {}
    void push(int);
    int pop();
    void show();
};
void stack::push(int X)
{
    if (top==10)
    cout<<"Overflow\n";
    else
    cout<<endl;
    A[++top]=X;
}
int stack::pop()
{
    if(top==-1)
    cout<<"underflow\n";
    else
    cout<<endl;
    return (A[top--]);
}
void stack::show()
{
    for (int i=0;i<=top;++i)
    {
        cout<<endl<<A[i]<<endl;
    }
}
int main()
{
   stack s1;
   s1.push(10);
   s1.push(22);
   s1.push(30);
   s1.show();
   cout<<s1.pop();
   s1.show();
   cout<<s1.pop();
   s1.show();
   cout<<s1.pop();
 cout<<s1.pop();
    return 0;
}
