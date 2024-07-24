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

void readInput(int& t, vector<vector<long long>>& data) {
    cin >> t;
    data.resize(t);
    FOR(i, 0, t) {
        long long size;
        cin >> size;
        data[i].resize(size);
        FOR(j, 0, size) {
            cin >> data[i][j];
        }
    }
}

unordered_map<long long, int> calculateFrequency(const vector<long long>& elements) {
    unordered_map<long long, int> frequency_map;
    FOR(i, 0, elements.size()) {
        frequency_map[elements[i]]++;
    }
    return frequency_map;
}

vector<long long> extract(const unordered_map<long long, int>& frequency_map) {
    vector<long long> frequencies;
    for (const auto& pair : frequency_map) {
        frequencies.push_back(pair.second);
    }
    sort(frequencies.rbegin(), frequencies.rend());
    return frequencies;
}

long long maxValues(const vector<long long>& frequencies) {
    long long maxVal = 0, csm = 0;
    FOR(i, 0, frequencies.size()) {
        csm += frequencies[i];
        long long pv = (csm / (i + 1)) * (i + 1);
        maxVal = max(maxVal, pv);
    }
    return maxVal;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    vector<vector<long long>> data;

    readInput(t, data);

    FOR(i, 0, t) {
        auto frequency_map = calculateFrequency(data[i]);
        auto frequencies = extract(frequency_map);
        cout << maxValues(frequencies) << endl;
    }

    return 0;
}
