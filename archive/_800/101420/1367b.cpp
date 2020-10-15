#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        // O(n) time, O(n) space
        vector<int> a(n);
        int misplacedOdds = 0, misplacedEvens = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (i % 2 != a[i] % 2) {
                misplacedOdds += a[i] % 2 != 0;
                misplacedEvens += a[i] % 2 == 0;
            }
        }

        if (misplacedOdds == misplacedEvens)
            cout << misplacedOdds << '\n';
        else
            cout << -1 << '\n';
    }

    return 0;
}
