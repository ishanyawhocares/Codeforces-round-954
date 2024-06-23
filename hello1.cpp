#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i ++) {
        cin >> a[i];
    }
    auto st = a[0];
    auto end = a[n];

    for (int i = 1; i <= n; i ++) {
        if (a[i] == 0 ) {
            swap( a[i] , st);
            st++;
        } else if (a[i] == 2) {
            swap(a[i] , end);
            end++;
        }
    }
    for (auto it = 0; it < n; it++) {
        cout << a[it];
    }

}

int main() {
    solve ();
    return 0;
}