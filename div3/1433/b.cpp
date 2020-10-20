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
        int mini = INT_MAX, maxi = INT_MIN;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i]) {
                mini = min(mini, i);
                maxi = max(maxi, i);
            }
        }

        int zcnt = 0;
        for (int i = mini; i <= maxi; i++) {
            if (a[i] == 0)
                zcnt++;
        }

        cout << zcnt << '\n';
    }


    return 0;
}
