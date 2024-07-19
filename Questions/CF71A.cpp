#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
    int d,e;
    string c;
    cin>>c;
    d = c.size();
    e=d-2;
    if (d>10){
        cout<<c[0]<<e<<c[d-1];
    }
    else {
        cout<<c;
    }
    cout<<endl;
    }
    return 0;
}