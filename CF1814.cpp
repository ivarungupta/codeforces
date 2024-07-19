#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a,b,x=0,y=0,count=0,div=0;
        cin>>a>>b;
        if(a==1)
        {
            count++;
        }
        if (b==1)
        {
            count++;
        }
        if (a%2==0)
        {
            div=a/2;
            count=count+div;
        }
        if (b%2==0)
        {
            div=b/2;
            count=count+div;
        }
        if (a%2!=0&&a!=1)
        {
            a=a+1;
            div=a/2;
            count=count+div;
        }
        if (b%2!=0&&b!=1)
        {
            b=b+1;
            div=b/2;
            count=count+div;
        }
        cout<<count;
    }
}