#include <bits/stdc++.h>
using namespace std;

int N;

void calc(vector<int> v, vector<int> l, int a, int b, int c, int& min_cost) {
    int len_a = 0;
    int len_b = 0;
    int len_c = 0;
    int num_a = 0;
    int num_b = 0;
    int num_c = 0;

    for (int i = 0; i < N; ++i) {
        switch (v[i]) {
            case 0:
                len_a += l[i];
                num_a++;
                break;
            case 1:
                len_b += l[i];
                num_b++;
                break;
            case 2:
                len_c += l[i];
                num_c++;
                break;
        }
    }
    if (num_a > 0 && num_b > 0 && num_c > 0) {
        int cost = abs(len_a - a) + abs(len_b - b) + abs(len_c - c) + (num_a + num_b + num_c - 3) * 10;
        if (cost < min_cost) {
            min_cost = cost;
        }
    }

}


void dfs(int depth, vector<int> v, vector<int> l, int a, int b, int c, int& min_cost) {
    if (depth == N) {
        calc(v, l, a, b, c, min_cost);
    }
    for (int i = 0; i < 4; ++i) {
        cout << depth << endl;
        v[depth] = i;
        depth++;
        dfs(depth, v, l, a, b, c, min_cost);
    }
}

int main () {
    int a, b, c;
    cin >> N >> a >> b >> c;

    vector<int> v(N, 0);
    vector<int> l(N);
    for (int i = 0; i < N; ++i) {
        cin >> l[i];
    }
    int min_cost = INT_MAX;

    dfs(0, v, l, a, b, c, min_cost);
    
    cout << min_cost << endl;
}

