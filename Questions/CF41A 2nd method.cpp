#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    string a;
    string b;
    cin>>a;
    cin>>b;
    reverse(a.begin(),a.end());
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