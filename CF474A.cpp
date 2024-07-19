#include<bits/stdc++.h>
using namespace std;
int main ()
{
    char t;
    cin>>t;
    string s;
    cin>>s;
    string key="qwertyuiopasdfghjkl;zxcvbnm,./";
    if(t=='L')
    {
        for(int i=0; i<s.length();i++)
        {
            for (int j=0; j<key.length();j++)
            {
                if (s[i]==key[j])
                {
                    cout<<key[j+1];
                }
            }
        }
    }
    if (t=='R')
    {
        for(int i=0; i<s.length();i++)
        {
            for (int j=0; j<key.length();j++)
            {
                if (s[i]==key[j])
                {
                    cout<<key[j-1];
                }
            }
        }
    }
}
