#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    string b;
    cin>>a;
    cin>>b;
    for(int i=0;i<a.length()/2;i++)
    {
        swap(a[i],a[(a.length())-i-1]);
    }
    if(a == b)
    {
        cout<<"YES";
    }
    else 
    {
        cout<<"NO";
    }
    return 0;
}
