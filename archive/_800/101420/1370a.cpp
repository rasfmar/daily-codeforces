#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b) {
    if (a < 0)
        a *= -1;
    if (b < 0)
        b *= -1;
    while (b != 0) {
        a %= b;
        if (a == 0)
            return b;
        b %= a;
    }
    return a;
}

int main(int argc, char **argv) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        // O(n) time, O(n) space
        /*
            vector<int> gcds;
            for (int i = n - 1; i > 0; i--) {
                gcds.push_back(gcd(n, i));
                if (i > 1)
                    gcds.push_back(gcd(n - 1, i - 1));
            }

            cout << *max_element(gcds.begin(), gcds.end()) << '\n';
        */

        // O(1) time, O(1) aux space
        cout << (n / 2) << '\n';
    }

    return 0;
}
