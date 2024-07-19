#include<bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    int b,c=0;
    string s;
    cin>>s;
    for(int i=0; i<s.length();i++)
    {
        if (isupper(s[i]))
        {
            c++;
        }

    }
    b=s.length()/2;
    if (c>b)
    {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        cout<<s;
    }
    else 
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        cout<<s;
    }
    return 0;
}
