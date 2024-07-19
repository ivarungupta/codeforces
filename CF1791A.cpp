#include<iostream>
#include<string>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for (int i=0 ; i<t ; i++)
    {
        string s = "codeforces";
        char ch;
        cin>>ch;
        int count=0;
        for(int j=0 ; j<10 ; j++)
        {
            if(ch==s[j])
            {
                count++;
            }
        }
        if(count==0)
        {
            cout<<"NO \n";
        }
        else 
        {
            cout<<"YES \n";
        }

    }

}

