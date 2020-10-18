#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<string> grid(n);
    for (auto &s : grid)
        cin >> s;

    char sd = grid[1][0], sr = grid[0][1];
    char fu = grid[n - 2][n - 1], fl = grid[n - 1][n - 2];

    int ans = 0;
    bool csd = false, csr = false, cfu = false, cfl = false;
    if (sd == sr) {
        if (fu == sr) {
            ans++;
            cfu = true;
        }
        if (fl == sd) {
            ans++;
            cfl = true;
        }
    } else if (fu == fl) {
        if (sr == fu) {
            ans++;
            csr = true;
        }
        if (sd == fl) {
            ans++;
            csd = true;
        }
    }
    
    cout << ans << '\n';
    if (csr)
        cout << "1 2\n";
    if (csd)
        cout << "2 1\n";
    if (cfu)
        cout << n - 1 << ' ' << n << '\n';
    if (cfl)
        cout << n << ' ' << n - 1 << '\n';
}

int main(int argc, char **argv) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
