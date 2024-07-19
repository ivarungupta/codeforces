#include<iostream>
using namespace std;
int main()
{
    int n,g=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[n];
    }
    for(int j=1;j<n;j++)
    {
        
        for(int k=0;k<n;k++)
        {
            int count=0;
            if(a[j]>a[k]);
            count++;
            cout<<count<<endl;
        
            if(count==j)
            {
                g++;
            }
        }
    }





    $


    #include <iostream>

using namespace std;

int main()
{
    int n, points;
    cin >> n >> points;
    int min(points), max(points), amazing(0);
    while (--n)
    {
        cin >> points;
        if (points < min)
        {
            min = points;
            ++amazing;
        }
        if (points > max)
        {
            max = points;
            ++amazing;
        }
    }
    cout << amazing << endl;
    return 0;
}
        
    
    cout<<g;
}