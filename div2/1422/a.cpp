#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        cout << ((long long)a + b + c - 1) << '\n';
    }

    return 0;
}
