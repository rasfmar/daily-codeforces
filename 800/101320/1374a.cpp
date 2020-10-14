#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int x, y, n;
        cin >> x >> y >> n;

        int ans = n - n % x + y;
        if (ans > n)
            ans -= x;

        cout << ans << '\n';
    }

    return 0;
}
