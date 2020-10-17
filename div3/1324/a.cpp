#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    int cmax = INT_MIN;
    for (int &i : a) {
        cin >> i;
        cmax = max(cmax, i);
    }
    
    bool totally = true;
    for (int i : a) {
        if ((cmax - i) % 2) {
            totally = false;
            break;
        }
    }

    cout << (totally ? "YES" : "NO") << '\n';
}

int main(int argc, char **argv) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
