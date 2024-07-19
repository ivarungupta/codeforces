#include<bits/stdc++.h>
using namespace std;
int main(){
    string n;
    cin>>n;
    int b=n.length();
    int z=1;
    int a;
    for(int i=1; i<b; i++)
    {
        int t=1;
        for(int j=i+1;j<b;j++)
        {
            if(n[i]==n[j])
            {
                t=0;
                break;
            }
        } 
        if (t==1){
            z=z+1;
        }
    }       
    if (z%2==0){
        cout<<"CHAT WITH HER!"<<endl;
    }    
    else
        cout<<"IGNORE HIM!"<<endl;
    return 0;
}