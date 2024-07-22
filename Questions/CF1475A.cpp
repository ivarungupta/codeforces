/*
__     _______
\ \   / / ____|
 \ \ / / |  __    /\_/\
  \ V /| | |_ |  ( o.o )
   \ / | |__| |   > ^ <
    V   \_____|

*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vec vector
#define pb push_back
#define pq priority_queue
#define mp make_pair
#define MOD 1000000007
#define FOR(i, a, b) for (int i = a; i < b; i++)

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t,n;
    cin>>t;
    while(t--){
        cin>>n;
        if(n & 1){
            cout<<"YES"<<endl;
        }
        else{
            bool ok = false;
            ll div = n;
            while(div > 2){
                div /= 2;
                if(div & 1){
                    if(n % div == 0){
                        ok = true;
                        break;
                    }
                }
            }
            if(ok){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}