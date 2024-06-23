#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    if (n == 2) {
        // Directly return the number as we can't insert any operators
        cout << stoi(s) << endl;
        return;
    }

    ll min_result = LLONG_MAX;

    // There are 2^(n-1) possible combinations of `+` and `*` symbols
    int total_combinations = 1 << (n - 1);

    for (int mask = 0; mask < total_combinations; ++mask) {
        vector<ll> values;
        vector<char> ops;

        string current_number;
        for (int i = 0; i < n; ++i) {
            current_number += s[i];
            if (i < n - 1) {
                if (mask & (1 << i)) {
                    // Place a `+` operator
                    values.push_back(stoll(current_number));
                    ops.push_back('+');
                    current_number = "";
                } else {
                    // Place a `*` operator
                    values.push_back(stoll(current_number));
                    ops.push_back('*');
                    current_number = "";
                }
            }
        }
        values.push_back(stoll(current_number));

        // Now compute the result of this expression considering operator precedence
        vector<ll> mult_results;
        mult_results.push_back(values[0]);
        for (int i = 0; i < ops.size(); ++i) {
            if (ops[i] == '*') {
                mult_results.back() *= values[i + 1];
            } else {
                mult_results.push_back(values[i + 1]);
            }
        }

        // Sum all the results in mult_results to get the final result of this expression
        ll result = 0;
        for (ll val : mult_results) {
            result += val;
        }

        min_result = min(min_result, result);
    }

    cout << min_result << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
