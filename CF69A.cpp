#include<iostream>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int x,y,z;
    int s1=0,s2=0,s3=0;
    for (int i=0;i<n;i++ )
    {
        cin>>x>>y>>z;
        s1=s1+x;
        s2=s2+y;
        s3=s3+z;
    }
    if (s1==0 && s2==0 && s3==0)
    {
        cout<<"YES";
    }
    else 
    {
        cout<<"NO";
    }
    return 0;
}