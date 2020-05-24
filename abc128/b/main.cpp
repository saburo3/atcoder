#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin >> n;
    vector<pair<pair<string,int>,int> > r(n);
    
    string s;
    int p;
    for (int i = 0; i < n; ++i) {
        cin >> s >> p;
        r[i] = make_pair(make_pair(s, -p), i);
    }

    sort(r.begin(), r.end());
    for (int i = 0; i < n; ++i) {
        cout << r[i].second + 1 << endl;
    }

}

