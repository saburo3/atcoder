// priority_queue : O(log 要素数)

#include <bits/stdc++.h>
using namespace std;

int main() {
    priority_queue<pair<int, int> > q;
    int n, m;
    cin >> n >> m;

    int a[n];
    int b[m];
    int c[m];

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        q.push(make_pair(a[i], 1));
    }
    for (int i = 0; i < m; ++i) {
        cin >> b[i] >> c[i];
        q.push(make_pair(c[i], b[i]));
    }

    long long ans = 0;
    for (int i = 0; i < n; ++i) {
        pair<int, int> p = q.top();
        q.pop();
        ans += p.first;
        if (p.second > 1) {
            p.second--;
            q.push(p);
        }
    }
    cout << ans << endl;

}

