#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,a=0;
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        a=a+pow(-1,i)*i;
    }
    cout<<a;
    return 0;
}