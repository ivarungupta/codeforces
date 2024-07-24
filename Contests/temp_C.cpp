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
#define vec vector<ll>
#define pb push_back
#define pq priority_queue
#define mp make_pair
#define MOD 1000000007
#define FOR(i, a, b) for (int i = a; i < b; i++)

void read_vector(vec &v) {
    for (auto &elem : v) {
        cin >> elem;
    }
}

void initialCount(const vec &elements, ll thr, ll &count, ll &surplus, vec &b) {
    count = 0;
    surplus = 0;
    b.clear();

    for (const auto &elem : elements) {
        if (elem >= thr) {
            count++;
            surplus += elem - thr;
        } else {
            b.push_back(elem);
        }
    }
}

ll process(const vec &b, ll thr, ll &surplus) {
    ll ac = 0;
    for (const auto &elem : b) {
        ll required = thr - elem;
        if (surplus >= required) {
            surplus -= required;
            ac++;
        } else {
            break;
        }
    }
    return ac;
}

ll single() {
    ll ne, thr;
    cin >> ne >> thr;

    vec elements(ne);
    read_vector(elements);

    ll count, surplus;
    vec b;

    initialCount(elements, thr, count, surplus, b);
    sort(b.rbegin(), b.rend());

    count += process(b, thr, surplus);
    
    return count;
}

void testCases() {
    ll t;
    cin >> t;

    while (t--) {
        cout << single() << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    testCases();

    return 0;
}
