#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,d=0;
    cin>>n;
    while(n--)
    {
        int c=0;
        int arr[3]= {};
        for (int i=1;i<4;i++)
        {
            cin>>arr[i];
        }
        for (int i=1;i<4;i++)
        {
            if (arr[i-1]==1)
            c=c+1;
        }
    
        if (c>=2)
            d++;
    }
    cout<<d;
    return 0;
}