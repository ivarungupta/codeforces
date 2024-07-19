#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b;
    if (a>b)
    {
        c=(a-b)/2;
        cout<<b<<" "<<c;
    }
    else if (a<=b)
    {
        c=(b-a)/2;
        cout<<a<<" "<<c;
    }
    return 0;
}