#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int a,b,c=0,ans=0;
        cin>>a>>b;

        if(a>=b)
        {
            c=b*2;
            
            if(a>c)
            {
                ans=a*a;
                cout<<ans<<endl;
            }
            else
            {
                ans=c*c;
                cout<<ans<<endl;
            }

        }
        else
        {
            c=2*a;
    
            if(b>=c)
            {
                ans=b*b;
                cout<<ans<<endl;
            }
            if(c>b)
            {
                ans=c*c;
                cout<<ans<<endl;
            }

        }
    }
}