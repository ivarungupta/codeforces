#include<iostream>
using namespace std;
int main()
{
    int n,a=0,b=0,count1=0,count2=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        if(a>b)
        {
            count1++;
        }
        if(a<b)
        {
            count2++;
        }

    }
    if(count1>count2)
    {
        cout<<"Mishka";
    }
    else if(count1<count2)
    {
        cout<<"Chris";
    }
    else if(count1==count2)
    {
        cout<<"Friendship is magic!^^";
    }
    return 0;
}