#include <bits/stdc++.h>

using namespace std;

void solve() {
    // this is awful time complexity
    // could not think of a better solution at the time

    string ss;
    list<char> s;
    cin >> ss;
    for (char c : ss)
        s.push_back(c);

    if (s.size() < 2) {
        cout << s.size() << '\n';
        return;
    }

    bool madeChanges;
    do {
        madeChanges = false;

        auto first = s.begin();
        auto second = s.begin();
        second++;

        list<char> news;

        for (; s.size() >= 2 && first != s.end(); first++, second++) {
            if (second != s.end() && *first == 'A' && *second == 'B') {
                madeChanges = true;
                first++;
                second++;
            } else {
                news.push_back(*first);
            }
        }

        if (madeChanges)
            s = news;
    } while (madeChanges);

    do {
        madeChanges = false;

        auto first = s.begin();
        auto second = s.begin();
        second++;

        list<char> news;

        for (; s.size() >= 2 && first != s.end(); first++, second++) {
            if (second != s.end() && *first == 'B' && *second == 'B') {
                madeChanges = true;
                first++;
                second++;
            } else {
                news.push_back(*first);
            }
        }

        if (madeChanges)
            s = news;
    } while (madeChanges);

    cout << s.size() << '\n';
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
