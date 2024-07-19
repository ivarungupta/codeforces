#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int c=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int j=0;j<n;j++)
    {
        if(arr[j]!=0)
        {
         c++;
        }
    }
    if(c==0)
    {
        cout<<"EASY";
    }
    else {
        cout<<"HARD";
    }
    
    return 0;
}