#include<iostream>
using namespace std;
int main()
{
    int n,a,b,c;
    cin>>n;
    a=n%5;
    if(a==0)
    {
        b=n/5;
        c=b;
        cout<<b;
    }
    else 
    {
        b=n/5;
        c=b+1;
        cout<<c;
    }
    return 0;
}