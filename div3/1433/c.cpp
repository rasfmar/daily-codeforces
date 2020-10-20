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
        
        vector<int> a(n);
        vector<int> maxis;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (maxis.size() < 1 || a[maxis.back()] <= a[i]) {
                maxis.push_back(i);
            }
        }

        int ans = -1;
        for (int k = maxis.size() - 1; k >= 0; k--) {
            int i = maxis[k];
            int val = a[i];
            if (i == n - 1) {
                // at the end
                int lt = a[i - 1];
                if (lt < val) {
                    ans = i;
                    break;
                } else {
                    continue;
                }
            } else if (i == 0) {
                // at the beginning
                int rt = a[i + 1];
                if (val > rt) {
                    ans = i;
                    break;
                } else {
                    continue;
                }
            } else {
                int lt = a[i - 1];
                int rt = a[i + 1];

                if (val > lt || val > rt) {
                    ans = i;
                    break;
                } else {
                    continue;
                }
            }
        }

        if (ans != -1)
            ans++;

        cout << ans << '\n';
    }

    return 0;
}
