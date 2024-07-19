#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    char a1[]="B";
    char a2[]="G";
    cin>>n;

    for(int a=0;a<n;a++)
    {
        int num,count=0;
        cin>>num;
    string s1;
    string s2;
        cin>>s1;
        cin>>s2;
        
            for (int i=0;i<s1.length();i++)
            {
             if(s1[i]==a2[0])
                {
                 s1[i]=a1[0];
                }
            }
            for (int j=0;j<s2.length();j++)
            {
            if(s2[j]==a2[0])
                {
                s2[j]=a1[0];
                }
            }
            for (int k=0;k<s1.length();k++)
            {
            if (s1[k]==s2[k])
                {
                count++;
                }
            }
        if (count==num)
            {
                cout<<"YES"<<endl;
            }
        else 
            {
              cout<<"NO"<<endl;
            }
            
    }
    return 0;
}