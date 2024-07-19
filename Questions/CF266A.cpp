#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string s;
    int a=s.length();
    int c=0;
    cin>>a;
    cin>>s;
    for(int i=0;i<a;i++)
    {
        if (s[i]==s[i+1])
        {
            c=c+1;
        }
    }
    cout<<c;
    return 0;
}