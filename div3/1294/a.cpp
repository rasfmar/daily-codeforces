#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int a, b, c, n;
        cin >> a >> b >> c >> n;

        int cmax = max(a, max(b, c));
        int diffa = cmax - a, diffb = cmax - b, diffc = cmax - c;

        n -= diffa + diffb + diffc;

        if (n % 3 == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
