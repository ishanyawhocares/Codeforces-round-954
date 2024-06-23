#include <bits/stdc++.h>
using namespace std;


void solve() {
    int n , k;
    cin >> n >> k;
    int p1;
    int p2;
    vector <int> p;

    int count = 0;
    for (int i = 0 ;i < n; i ++) {
        if (abs(p1 - (i+1)) + abs(p2 - (i+ 1))) {
            count ++;
        }
        p.push_back(p1);
    }
    if (count == 0) {
        cout << "NO";
    } else {
        cout << "YES";
        for (auto it : p) {
        cout << it << " ";
    }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}






