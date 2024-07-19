#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    int a1,b1,a2,b2,a3,b3,a4,b4;
    int l,b;
    int area;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a1>>b1;
        cin>>a2>>b2;
        cin>>a3>>b3;
        cin>>a4>>b4;
        if(b1==b2)
        {
            l=a1-a2;
            b=a3-a4;
        }
        if(b1==b3)
        {
            l=a1-a3;
            b=a2-a4;
        }
        if(b1==b4)
        {
            l=a1-a4;
            b=a2-a3;
        }
        
        area=l*b;
        cout<<abs(area)<<endl;
    }
}