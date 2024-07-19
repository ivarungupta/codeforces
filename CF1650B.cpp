#include<iostream>
using namespace std;
int main ()
{
    int n;
    cin >> n;
    for (int i=0 ; i<n ; i++)
    {
        int a,l,r;
        cin >> l >> r >> a;
        int max = 0;
        int f = 0;
        for (int i=l ; i<r ; i++)
        {
            if (i<a)
            {
                f =(i%a);
            }
            else 
            {
                f = (i/a) + (i%a);
            }
            if (max <= f)
            {
                max=f;
            }
        }
        cout<<max<<endl;

    }
}