#include <iostream>

using namespace std;

int main()
{
    int la[10];
    for (int i=0;i<6;i++)
    {
        cout<<"Enter the values in array "<<i<<endl;
        cin>>la[i];

    }
    int item,k,j,n=5;
    cout<<"Enter the place where u want to remove value\n";
    cin>>k;
    item=la[k];
    for (j=k;j<=n;j++)
    {
        la[j]=la[j+1];
    }
    j=1;
    for (j=0;j<n;j++)
    {
        cout<<la[j]<<endl;
    }
    cout<<"\nThe item removed is "<<item;

    return 0;
}
