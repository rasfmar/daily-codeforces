#include <bits/stdc++.h>

using namespace std;

int test(int n) {
    if (n == 1)
        return 2;
    return 2 + 2 * test(n - 1);
}

int main(int argc, char **argv) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        // O(1) time, O(log(n)) space
        cout << test(n / 2) << '\n';
    }

    return 0;
}
