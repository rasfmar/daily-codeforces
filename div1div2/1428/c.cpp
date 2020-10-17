#include <bits/stdc++.h>

using namespace std;

void solve() {
    string s;
    cin >> s;

    int sz = 0;
    for (char c : s) {
        if (sz && c == 'B')
            sz--;
        else
            sz++;
    }

    cout << sz << '\n';
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
