#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            cin>>a[i];
        }
    }
    for(int i=1;i<=n;i++)
    {
       if(i%2==0)
        {
            cin>>a[n+i];
        } 
    }
    cout<<a[k];
}