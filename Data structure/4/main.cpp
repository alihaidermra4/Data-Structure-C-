#include <iostream>

using namespace std;

int main()
{
    int m=10;
    int la[m];
    for (int i=0;i<m;i++)
    {
        cout<<"Enter the value in array at index "<<i<<endl;
        cin>>la[i];
    }

    int k;
    for (k=0;k<m;k++)
    {
        cout<<"for loop"<<endl;
         int ptr=0;
        while (ptr < m-k)
        {
            cout<<"while"<<endl;
            if (la[ptr]>la[ptr+1])
            {
            cout<<"if"<<endl;
                int temp;
                temp= la[ptr];
                la[ptr] = la[ptr+1];
                la[ptr+1]=temp;
            }
            ptr=ptr+1;
        }
    }
    for (int i=0;i<m;i++)
    {
        cout<<la[i]<<endl;
    }
        return 0;
}
