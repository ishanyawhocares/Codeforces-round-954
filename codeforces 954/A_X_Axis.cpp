// codeforces round 954 problem A code
// creator - Ishanya Sharma

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp> // Including tree_order_statistics_node_update

using namespace std;
using namespace __gnu_pbds;

void solve() {
    int x1, x2, x3;
        cin >> x1 >> x2 >> x3;
        
        vector<int> v = {x1, x2, x3};
        
        sort(v.begin(), v.end());
        
        int a = v[1];
        
        int minDistance = abs(x1 - a) + abs(x2 - a) + abs(x3 - a);
        
        cout << minDistance << endl;
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int tt;
    cin >> tt;

    while (tt--) {
        solve();
    }

    return 0;
}
