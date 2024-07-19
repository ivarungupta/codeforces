#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,d=0,a=0;
    cin>>n;
    string s;
    char b = 'D';
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if (s[i]== b)
        {
           d++; 
        }
    }
    a=s.length()-d;
    if (a>d)
    {
        cout<<"Anton";
    }
    else if (a<d)
    {
        cout<<"Danik";
    }
    else if (a==d)
    {
        cout<<"Friendship";
    }
    return 0;
}