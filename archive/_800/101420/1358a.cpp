#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int m, n;
        cin >> m >> n;
        cout << ((m * n + 1) / 2) << '\n';
    }

    return 0;
}