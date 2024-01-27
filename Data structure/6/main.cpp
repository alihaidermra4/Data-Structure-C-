#include <iostream>

using namespace std;

int main()
{
    int i=1,j=1,m=2,n=2;
    int a[i][j];
    int item=0;
    for (i=1;i<=m;i++)
    {
        for (j=1;j<=n;j++)
        {

            cout<<"Enter the value for a in index "<<i<<"&"<<j<<endl;
            item=0;
            cin>>item;
            a[i][j]=item;
        }
    }
    int b[i][j];
    for (i=1;i<=m;i++)
    {
        for (j=1;j<=n;j++)
        {

            cout<<"\nEnter the value for b in index "<<i<<"&"<<j<<endl;
            cin>>item;
            b[i][j]=item;
        }
    }
    int c[i][j];
     for (i=1;i<=m;i++)
    {
        for (j=1;j<=n;j++)
        {
            cout<<"\na ="<<a[i][j];
                        cout<<"\nb ="<<b[i][j];
            c[i][j] =  a[i][j] + b[i][j];
        }
    }
     for (i=1;i<=m;i++)
    {
        for (j=1;j<=n;j++)
        {

            cout<<"\nThe answer in c at index "<<i<<"&"<<j<<" = "<<c[i][j];
        }
    }
    return 0;
}
