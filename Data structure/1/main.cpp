#include <iostream>

using namespace std;

int main()
{
    int la[10];
    int i,j,k,n=0,item=200;

    for (i=0;i<7;i++)
    {
    cin>>la[i];
    n=n+1;
    }
    j=n;
    cout<<"Enter value of k\n";
    cin>>k;
    while (j>=k)
    {
        la[j+1] = la[j];
        j=j-1;
    }
    la[k]=item;
    n=n+1;
    i=0;
    while(i<=n-1)
    {
        cout<<la[i]<<endl;
        i++;
    }
     return 0;
}
