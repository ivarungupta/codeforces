#include<bits/stdc++.h>
using namespace std;

int main()
{
   string s1;
   string s2;
   cin>>s1;
   cin>>s2;
   int z=s1.length();
   transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
   transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
   if(s1>s2)
   {
      cout<<"1";
   }
   else if(s1<s2)
   {
      cout<<"-1";
   }
   else if(s1==s2)
   {
      cout<<"0";
   }
return 0;      
}

