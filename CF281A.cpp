#include<bits/stdc++.h>
using namespace std;
  
int main(){
    string s1
    cin>>s1;
    transform(s1.begin(), s1.end(), s1.begin(),::toupper);
    cout<<s1<<endl;
    return 0;
}