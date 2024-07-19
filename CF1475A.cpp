#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        long long n;
        int count=0;
        cin >> n;
        for (int j = 1; j <= n; j+=2)
        {
            
            if (n % j == 0 && j>1)
            {
                n/=2;
                count++;
                break;
            }
            
        }
        if (count !=0)
        {
            cout<<"YES\n";
        }
        else 
        {
            cout<<"NO\n";
        }
    }
}