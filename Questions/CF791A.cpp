#include<iostream>
using namespace std;
int main ()
{
    int a,b;
    int count=0;
    cin>>a>>b;
    while(a<=b)
    {
        count++;
        a=3*a;
        b=2*b;
    }
    cout<<count;
    return 0;
}