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

int calculateTotalAmount(int income, int amount) {
    return income * amount;
}

int calculateReduction(int total, int account, int amount) {
    if (total <= account) {
        return 0;
    } else {
        return (total - account + amount - 1) / amount;
    }
}

void processTestCase() {
    int s, amount, limit;
    cin >> s >> amount >> limit;
    
    int total = calculateTotalAmount(s, amount);
    int red = calculateReduction(total, limit, amount);
    
    cout << red << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    FOR(i,0,t)
    {
        processTestCase();
    }

    return 0;
}
