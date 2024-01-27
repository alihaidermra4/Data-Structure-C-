#include <iostream>

using namespace std;

int main()
{
    //The array should be sorted
    int la[10]={10,20,30,40,50,60,70,80,90,100};
    int beg=0;
    int end=9;
    int mid = (beg+end)/2;
    int item;
    cout<<"Enter the value to search\n";
    cin>>item;
    while (beg<=end && la[mid]!=item)
    {
        cout<<"while\n";
        if (item<la[mid])
        {

        cout<<"if\n";    end=mid-1;
        }
        else
        {
            beg=mid+1;
        }
        mid=(beg+end)/2;
    }
    if (la[mid]==item)
    {
        cout<<&la[mid];
    }
    else
    {
        cout<<"null";
    }
    return 0;
}
