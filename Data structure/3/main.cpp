#include <iostream>

using namespace std;

int main()
{
    int la[6];
    int N=0,item,Loc;
    for (int i=0;i<6;i++)
    {
        cout<<"Enter the values in array "<<i<<endl;
        cin>>la[i];
        N =N+1;
    }
    cout<<"\nEnter the item\n";
    cin>>item;
    la[N+1]=item;
    Loc = 0;
    while(la[Loc]!= item)
    {
       cout<<la[Loc] <<"!="<<item<<endl;
       Loc=Loc+1;
    }
    if (Loc == N+1)
    {
        cout<<la[Loc]<<"="<<la[N+1];
    Loc=0;
    }
    return 0;
}
