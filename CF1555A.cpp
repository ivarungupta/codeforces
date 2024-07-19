#include<iostream>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    while(n--)
    {
        long long a;
        cin>>a;
        if(a%2!=0)
        {
            a=a+1;
        }
        long long ans=0;
        if(a<=6)
        {
            cout<<"15"<<endl;
        }
        if(a>=12)
        {
            ans=(a*5)/2;
            cout<<ans<<endl;
        }
        if(a==8)
        {
            cout<<"20"<<endl;
        }
        if(a==10)
        {
            cout<<"25"<<endl;
        }
    }
}
