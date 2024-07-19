#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    for (int i=0;i<t;i++)
    {
        int n;
        int operations=0;
        string s;
        string f;
        cin>>n;
        cin>>s;
        cin>>f;
        for(int i=0;i<n;i++)
        {
            if (s[i] != f[i]) {
                if (i + 1 < n && s[i + 1] == '0' && f[i] == '1') {
                    // Move a cat from box i to box i+1
                    swap(s[i], s[i + 1]);
                    operations++;
                } else {
                    // Place a new cat or remove a cat from box i
                    s[i] = f[i];
                    operations++;
                }
            }

        }
        
        cout<<operations<<endl;
    }
}
