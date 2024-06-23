#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp> // Including tree_order_statistics_node_update

using namespace std;
using namespace __gnu_pbds;

void solve() {
    int n;
    cin >> n;
    vector<int> a;

    int input;
    while(cin>>input){
        a.push_back(input);
    }
    int n = a.size();


    int st = 0;
    int end = n - 1;
    int i = 0;

    while (i <= end) {
        if (a[i] == 0) {
            swap(a[i], a[st]);
            st++;
            i++;
        } else if (a[i] == 2) {
            swap(a[i], a[end]);
            end--;
        } else {
            i++;
        }
    }

    for (int it = 0; it < n; it++) {
        cout << a[it] << " ";
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    solve();

    return 0;
}



