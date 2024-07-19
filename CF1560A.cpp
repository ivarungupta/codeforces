#include<iostream>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    int arr[1001];
    int j=1;
    for(int i=1;i<=1666;i++)
        {
            if(i%3!=0 ||i%10!=3)
            {
                arr[j]=1;
                j=j+1;
            }
        
        }

    while(t--)
    {
        int k;
        cin>>k;
        cout<<arr[k-1]<<endl;
    }
}