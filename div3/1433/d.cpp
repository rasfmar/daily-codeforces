#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<long long> a(n);
    vector<int> dupeis;
    unordered_set<long long> check;
    unordered_set<int> checkis;
    vector<pair<int, int> > connections;

    int lasti = -1;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (check.count(a[i])) {
            dupeis.push_back(i);
        } else {
            if (lasti != -1)
                connections.push_back({ lasti + 1, i + 1 });
            lasti = i;
            check.insert(a[i]);
            checkis.insert(i);
        }
    }

    for (int i : dupeis) {
        long long diffvalue = a[i], diffi = i;
        for (int j: checkis) {
            if (diffvalue == a[i]) {
                diffvalue = a[j];
                diffi = j;
            }
        }
        if (diffvalue == a[i]) {
            cout << "NO\n";
            return;
        }
        connections.push_back({ diffi + 1, i + 1 });
    }

    if (connections.size() == 0) {
        cout << "NO\n";
        return;
    } else {
        cout << "YES\n";
        for (auto p: connections)
            cout << p.first << ' ' << p.second << '\n';
    }

    /*
    vector<long long> a(n);
    vector<pair<long long, long long> > c;
    unordered_set<long long> uniq;
    map<long long, long long> check;
    vector<long long> dupe, dupeis;

    long long lasti = -1;
    for (long long i = 0; i < n; i++) {
        cin >> a[i];
        if (uniq.count(a[i])) {
            dupe.push_back(a[i]);
            dupeis.push_back(i);
        } else {
            if (lasti != -1) {
                c.push_back({ lasti + 1, i + 1 });
            }
            lasti = i;
            check.insert({ a[i], i });
            uniq.insert(a[i]);
        }
    }

    if (lasti == -1 || check.size() <= 1) {
        cout << "NO\n";
        return;
    }

    for (long long k = 0; k < dupeis.size(); k++) {
        long long i = dupeis[k];
        if (uniq.size() - uniq.count(dupe[i]) > 0) {
            long long diffval = dupe[i];
            for (long long i: uniq)
                if (diffval == dupe[i])
                    diffval = i;
                else
                    break;
            c.push_back({ check[diffval] + 1, i + 1});
        } else {
            cout << "NO\n";
            return;
        }
    }

    if (c.size() == 0) {
        cout << "NO\n";
        return;
    } else {
        cout << "YES\n";
        for (auto p: c)
            cout << p.first << ' ' << p.second << '\n';
    }
    */
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
