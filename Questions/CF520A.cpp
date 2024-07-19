#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a=0;
    cin>>n;
    string s1;
    string s2 = "abcdefghijklmnopqrstuvxyz";
    cin>>s1;
    if (n>25)
    {
        transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
        for (int i=0;i<26;i++)
        {
            if (s1.find(s2[i])!= string::npos)
            {
                a++;
            }
        }
        if (a=26)
        {
            cout<<"YES";
        }
        else {
            cout<<"NO";
        }
    }
    else {
        cout<<"NO";
    }
    return 0;
}