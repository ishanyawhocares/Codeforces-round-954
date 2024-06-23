#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp> // Including tree_order_statistics_node_update

using namespace std;
using namespace __gnu_pbds;

void solve() {
    int n, m; 
    cin >> n >> m;

    string s;
    cin >> s;
        
    vector<int> a(m, 0);
    for (int i = 0; i < m; i++) {
        cin >> a[i];
    }

    string s2;
    cin >> s2;
    sort(s2.begin(), s2.end());

    map<int, int> mp;
    for (auto it : a) {
        mp[it]++;
    }

    int extra = 0;
    for (auto it : mp) {
        extra += it.second - 1;
    }

    s2 = s2.substr(0, m - extra);

    int i = 0;
    for (auto it : mp) {
        int pos = it.first;
        s[pos - 1] = s2[i];
        i++;
    }

    cout << s << endl;
}

int main() {
    int t; // number of test cases
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
