#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        int a=0,b=0,c=0,d=0;
        int count=0;
        cin>>a>>b>>c>>d;
        if (a<b)
        {
            count++;
        }
         if (a<c)
        {
            count++;
        }
         if (a<d)
        {
            count++;
        }
        cout<<count<<endl;
    }
    
    return 0;
}