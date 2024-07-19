#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int count1=0;
    int count2=0;
    int res=0;
    int answer=0;
    for(int i=0;i<s.length();i++)
    {
        if (s[i]=='1')
        {
            count1++;
        }
        if (s[i]=='0')
        {
            count2++;
        }
    }
    if(count1>count2)
    {
        res=count2;
    }
    else if(count2>count1)
    {
        res=count1;
    }
    else 
    {
        res=count1;
    }
    answer=s.length()-2*res;
    cout<<answer;

    return 0;   
}