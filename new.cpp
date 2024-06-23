#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> ans(n);
    for (int i = 0; i < n; ++i) {
        ans[i] = i + 1;
    }

    int l = 0, r = n - 1;
    int la = (n - 1) * 2;

    while (k > la) {
        if (!(l < r)) {
            cout << "NO" << endl;
            return;
        }
        k -= la;
        swap(ans[l], ans[r]);
        la -= 4;
        r -= 1;
        l += 1;
    }

    int i = l;
    while (k > 0 && i < r) {
        k -= 2;
        l += 1;
    }

    if (k != 0) {
        cout << "NO" << endl;
    } else {
        swap(ans[i], ans[l]);
        cout << "YES" << endl;
        for (int j = 0; j < n; ++j) {
            cout << ans[j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
