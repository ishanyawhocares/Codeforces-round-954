// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long

// void solve() {
//     int n;
//     cin >> n;
//     vector<int> prices(n);
//     vector<int> front_color(n);
//     vector<int> back_color(n);
    
//     for (int i = 0; i < n; ++i) {
//         cin >> prices[i];
//     }
    
//     for (int i = 0; i < n; ++i) {
//         cin >> front_color[i];
//     }
    
//     for (int i = 0; i < n; ++i) {
//         cin >> back_color[i];
//     }
    
//     int m;
//     cin >> m;
//     vector<int> buyers(m);
    
//     for (int i = 0; i < m; ++i) {
//         cin >> buyers[i];
//     }

//     vector<set<pair<int, int>>> color_sets(4);
    
//     for (int i = 0; i < n; ++i) {
//         color_sets[front_color[i]].insert({prices[i], i});
//         if (front_color[i] != back_color[i]) {
//             color_sets[back_color[i]].insert({prices[i], i});
//         }
//     }
    
//     for (int i = 0; i < m; ++i) {
//         int favorite_color = buyers[i];
//         if (color_sets[favorite_color].empty()) {
//             cout << -1 << " ";
//         } else {
//             auto cheapest = *color_sets[favorite_color].begin();
//             cout << cheapest.first << " ";
            
//             for (int c = 1; c <= 3; ++c) {
//                 color_sets[c].erase(cheapest);
//             }
//         }
//     }
//     cout << endl;
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     solve();
//     return 0;
// }











#include <bits/stdc++.h>
using namespace std;
#define ll long long 

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    multimap<int, pair<int, int>> mp;
    queue<int> q;

    for (int i = 0; i < n; i++) {
        int x, y; 
        cin >> x >> a[i] >> b[i];
        mp.insert(make_pair(x, make_pair(a[i], b[i])));
        cin >> y;
        q.push(y);

    }

    auto it = mp.begin();
    while (!q.empty() && it != mp.end()) {
        int y = q.front();
        q.pop();
        if (y == it->second.first || y == it->second.second) {
            cout << it->first << " ";
        } else {
            cout << "-1 ";
        }
        ++it;
    }
    cout << endl;

}

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    return 0;


}









// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long 

// void solve() {
// 	int n;
// 	cin >> n;
// 	int a[n];
// 	int b[n];
// 	int x;
// 	multimap <int , pair<int, int>> mp;
// 	queue <int> q;

// 	for (int i = 0; i < n; i++) {
// 		int x; 
// 		cin >> x;
// 		cin >> a[i];
// 		cin >> b[i];
// 		mp.insert(make_pair (x, make_pair(a[i], b[i])));
// 		int y;
// 		cin >> y;
// 		q.push(y);
// 	}
	

// 	for (auto it = mp.begin(); it != mp.end(); it++) {
// 		if (q[it] == a[it] || q[it] == b[it]) {
// 			cout << x;
// 		} else {
// 			cout << "-1";
// 		}
// 	}
	

// }

// int main () {
// 	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
// 	solve();
// 	return 0;

// }

