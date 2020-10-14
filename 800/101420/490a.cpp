#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    // O(n) time, O(n) space

    int n;
    cin >> n;

    vector<int> t(n);
    vector<vector<int> > sz(3, vector<int>{});
    for (int i = 0; i < n; i++) {
        cin >> t[i];
        sz[t[i] - 1].push_back(i + 1);
    }

    size_t minsize = INT_MAX, minel = -1;
    for (int i = 0; i < 3; i++) {
        if (sz[i].size() < minsize) {
            minsize = sz[i].size();
            minel = i;
        }
    }

    cout << minsize << '\n';

    for (int i = 0; i < minsize; i++)
        cout << sz[0][i] << ' ' << sz[1][i] << ' ' << sz[2][i] << '\n';

    return 0;
}
