#include<iostream>
#include<string>
using namespace std;
int main ()
{
    int count1=0,count0=0;
    string s;
    cin>>s;
    for (int i=0;i<s.length();i++)
    {
        if(s[i]==s[i+1])
        {
            count1++;
        }
        
    }
    if (count1>=7)
    {
         cout<<"YES";
    }
    
    else if (count1<7 )
    {
        cout<<"NO";
    }
    return 0;
}