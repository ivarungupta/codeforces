#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cout<<"I hate it";
        if(n>1&&i/2==0)
            for (int j=0;j<n;j++)
            {
                cout<<"I love it";
                break;
            }
    }
    return 0;
    }