#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    vector<int> check(n, -1);
    int nolefts = 1;
    int norights = 1;
    
    for (char c : s) {
        nolefts &= c != '<';
        norights &= c != '>';
    }

    for (int i = 0; i < s.length(); i++) {
        int leftIdx = i == 0 ? s.length() - 1 : i - 1;
        // int afterIdx = i == s.length() - 1 ? 0 : i + 1;
        char left = s[leftIdx];
        char right = s[i];
        // char after = s[afterIdx];

        if (left == '-' || right == '-') {
            check[i] = 1;
        } else if (left != right) {
            check[i] = 0;
        } else if (left == '>' && right == '>') {
            check[i] = nolefts;
        } else if (left == '<' && right == '<') {
            check[i] = norights;
        }
    }

    int ans = 0;
    for (int i : check)
        ans += i;

    cout << ans << '\n';
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
