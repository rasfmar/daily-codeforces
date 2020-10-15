#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        // O(1) time, O(1) space

        int n, m;
        cin >> n >> m;
        cout << min(2, n - 1) * m << '\n';
    }

    return 0;
}
