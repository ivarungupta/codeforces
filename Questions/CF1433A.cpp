/*
__     _______
\ \   / / ____|
 \ \ / / |  __    /\_/\
  \ V /| | |_ |  ( o.o )
   \ / | |__| |   > ^ <
    V   \_____|

*/

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vec vector
#define pb push_back
#define pq priority_queue
#define mp make_pair
#define MOD 1000000007
#define FOR(i, a, b) for (int i = a; i < b; i++)
#define ull             unsigned long long
#define pb              push_back

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll t,n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int>v;
        v.pb(1);
        v.pb(11);
        v.pb(111);
        v.pb(1111);
        for(int i=2; i<10; i++){
            for(int j=0; j<4; j++){
                int d = v[j] * i;
                v.pb(d);
            }
        }
        int c = 0;
        for(int i=0; i<v.size(); i++){
            if(v[i] == n){
                if(v[i] < 10){
                    c++;
                }
                else if(v[i] < 100){
                    c += 2;
                }
                else if(v[i] <1000){
                    c += 3;
                }
                else if(v[i] < 10000){
                    c += 4;
                }
                break;
            }
            if(v[i] < 10){
                c++;
            }
            else if(v[i] < 100){
                c += 2;
            }
            else if(v[i] <1000){
                c += 3;
            }
            else if(v[i] < 10000){
                c += 4;
            }

        }
        cout<<c<<endl;
    }

    return 0;
}