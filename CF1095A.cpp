#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    for (int i=0;i<n;i++)
    {
       if (s[2*i+1]!=s[2*i+3])
       {
        cout<<s[2*i+1];
       }
    }
    return 0;
}