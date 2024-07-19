#include<iostream>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    for (int i=0;i<n;i++)
    {
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b && b>c)
    cout<<b<<endl;
    if(a<b && b<c)
    cout<<b<<endl;
    if(a>c && c>b)
    cout<<c<<endl;
    if(a<c && c<b)
    cout<<c<<endl;
    if(b>a && a>c)
    cout<<a<<endl;
    if(b<a && a<c)
    cout<<a<<endl;
    }
    return 0;
}