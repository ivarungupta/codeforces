#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int h[n],a[n],c=0;
    for(int i=0;i<n;i++)
    {
        cin>>h[i]>>a[i];
       }
    
        for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        {
            if (i!=j)
            {
            if(h[j]==a[i])
            {
              c++;
            }
            
        }
        }

    cout<<c;
    return 0;
}
