#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> a(2 * n), ans;
        unordered_set<int> check;
        for (int &i : a) {
            cin >> i;
            if (check.count(i) == 0)
                ans.push_back(i);
            check.insert(i);
        }

        for (int i = 0; i < ans.size(); i++)
            cout << ans[i] << (i == ans.size() - 1 ? '\n' : ' ');
    }

    return 0;
}
