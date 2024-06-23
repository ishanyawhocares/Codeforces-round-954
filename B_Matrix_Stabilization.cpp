#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp> // Including tree_order_statistics_node_update

using namespace std;
using namespace __gnu_pbds;

// void solve() {
//     int n, m;
//     cin >> n >> m;
//     vector <pair<int, int>> v[n][m];
//     for (int i = 0; i < n; i ++) {
//         for (int j = 0; j < m; j ++) {
//             cin >> v.push_back(make_pair{i , j});
//         }
//     }
// }

// int main () {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
    
//     int tt;
//     cin >> tt;

//     while (tt--) {
//         solve();
//     }

//     return 0;
// }




// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

int main() {
    int t; 
    cin >> t;
    
    while (t--) {
        int n, m; 
        cin >> n >> m;
        
        vector<vector<int>> a(n, vector<int>(m)); 
        
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> a[i][j];
            }
        }

        bool stabilized = false;
        while (!stabilized) {
            stabilized = true; 

            for (int i = 0; i < n; ++i) {
                for (int j = 0; j < m; ++j) {
                    int val = 0;
                    bool peak = true;

                    if (i > 0) {
                        val = max(val, a[i-1][j]);
                        if (a[i][j] <= a[i-1][j]) peak = false;
                    }
                    if (i < n-1) {
                        val = max(val, a[i+1][j]);
                        if (a[i][j] <= a[i+1][j]) peak = false;
                    }
                    if (j > 0) {
                        val = max(val, a[i][j-1]);
                        if (a[i][j] <= a[i][j-1]) peak = false;
                    }
                    if (j < m-1) {
                        val = max(val, a[i][j+1]);
                        if (a[i][j] <= a[i][j+1]) peak = false;
                    }

                    if (peak && a[i][j] > val) {
                        a[i][j] = val;
                        stabilized = false;
                    }
                }
            }
        }

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
