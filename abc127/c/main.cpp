#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int maxL = 1;
    int minR = n;
    int l, r;

    for (int i = 0; i < m; ++i) {
        cin >> l >> r;
        maxL = max(maxL, l);
        minR = min(minR, r);
    }

    int ans = minR - maxL + 1;
    ans = max(ans, 0);
    cout << ans << endl;

}

