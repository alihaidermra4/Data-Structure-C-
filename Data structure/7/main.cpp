#include <iostream>

using namespace std;

int main()
{
    int i=1,j=1,m=2,n=2,k=1,p=2;
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

            c[i][j]=0;
            for (k=1;k<=p;k++)
            {
             cout<<"\na ="<<a[i][k];
                        cout<<"\nb ="<<b[k][j];
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
                cout<<endl<<c[i][j]<<endl;
            }
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


