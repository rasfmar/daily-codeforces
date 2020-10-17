#include <bits/stdc++.h>

using namespace std;

void solve() {
    vector<int> x(2, 0), y(2, 0);
    cin >> x[0] >> y[0];
    cin >> x[1] >> y[1];

    int xdiff = abs(x[1] - x[0]);
    int ydiff = abs(y[1] - y[0]);
    int ans = xdiff + ydiff + 2 * (xdiff && ydiff);

    cout << ans << '\n';
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
