#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,d=0;
    cin>>n;
    while (n--)
    {
        int a=0,b=0,c=0;
        cin>>a>>b>>c;
            if (a+b+c>1)
        {
            d=d+1;
        }
    }
        cout<<d;
     return 0;
}