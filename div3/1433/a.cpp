#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        string x;
        cin >> x;

        int n = x.length();
        int ax = x[0] - '0';

        cout << ((n * (n + 1) / 2) + 10 * (ax - 1)) << '\n';
    }

    return 0;
}
