#include <bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++) {
        cin >> v[i];
    }

    ll ans = 0;
    unordered_map<ll, vector<ll>> index_map;

    // Store indices for each value in v
    for (ll i = 0; i < n; i++) {
        index_map[v[i]].push_back(i + 1);
    }

    // Traverse each pair of values in the vector
    for (ll i = 0; i < n; i++) {
        for (ll j = 1; j * j <= v[i]; j++) {
            if (v[i] % j == 0) {
                ll div1 = j;
                ll div2 = v[i] / j;

                // Check for indices for div1 and div2
                for (ll x : index_map[div1]) {
                    if (x > i + 1 && (x * (i + 1)) % (v[i] * v[x - 1]) == 0) {
                        ans++;
                    }
                }

                if (div1 != div2) {
                    for (ll x : index_map[div2]) {
                        if (x > i + 1 && (x * (i + 1)) % (v[i] * v[x - 1]) == 0) {
                            ans++;
                        }
                    }
                }
            }
        }
    }

    cout << ans << endl;
}

int main() {
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
