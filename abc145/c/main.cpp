#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin >> n;

    vector<int> index(n);
    vector<pair<int,int> > z;
    for (int i = 0; i < n; ++i) {
        int x, y;
        cin >> x >> y;
        z.push_back(make_pair(x, y));
        index[i] = i;
    }

    double ans = 0;
    int t = 0;
    do {
        for (int i = 1; i < n; ++i) {
            ans += sqrt(pow(z[index[i]].first - z[index[i-1]].first, 2) + pow(z[index[i]].second - z[index[i-1]].second, 2));
        }
        t++;
    } while (next_permutation(index.begin(), index.end()));

    ans /= (double)t;
    printf("%.7f\n", ans);

}

