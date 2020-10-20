#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll fact(ll amt) {
    ll ans = 1;
    for (ll i = 1; i <= amt; i++)
        ans *= i;
    return ans;
}

int main(int argc, char **argv) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n;
    cin >> n;
    cout << fact(n-1)/(long long)floor((n+1)/2) << '\n';

    return 0;
}
