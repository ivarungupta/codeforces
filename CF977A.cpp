#include<iostream>
using namespace std;
int main()
{
    int n=0,k=0,a=0;
    cin>>n>>k;
    for (int i=0;i<k;i++)
    {
        a=n%10;
        if (a==0)
        {
            n=n/10;
        }
        else 
        {
           n--;
        }
      
    } 
    cout<<n; 
return 0;
}