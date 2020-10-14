#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        // O(n * log(n)) time, O(n) space

        int n;
        cin >> n;

        vector<int> s(n);
        for (int &i : s)
            cin >> i;

        sort(s.begin(), s.end());

        int gmin = INT_MAX;
        for (int i = 0; i < n - 1; i ++)
            gmin = min(gmin, abs(s[i] - s[i + 1]));

        cout << gmin << '\n';
    }

    return 0;
}
