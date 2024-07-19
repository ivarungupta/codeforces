#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int count=0;
     while(n>1)
     {
    if(n%2==1)
    {
        count++;
        n=n/2;
    }
     }
     cout<<count+1;
}