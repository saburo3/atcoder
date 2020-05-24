#include <bits/stdc++.h>
using namespace std;

int main () {
    int n, m;
    cin >> n >> m;

    // get input
    vector<int> a(n);
    for (int i = 0; i < m; ++i) {
        int k;
        cin >> k;
        for (int j = 0; j < k; ++j) {
            int s;
            cin >> s;
            s--;
            a[s] |= 1 << i;
        }
    }

    int p = 0;
    for (int i = 0; i < m; ++i) {
        int x;
        cin >> x;
        p |= x << i;
    }

    // search
    int ans = 0;
    for (int s = 0; s < (1<<n); ++s) {
        int t = 0;
        for (int i = 0; i < n; ++i) {
            if (s >> i & 1) {
                t ^= a[i];
            }
        }
        if (t == p) {
            ans++;
        }
    }
    cout << ans << endl;

}

