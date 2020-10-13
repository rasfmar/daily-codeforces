#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef unsigned int ui;
 
typedef vector<int> vi;
typedef vector<ui> vui;
typedef vector<ll> vll;
typedef vector<ull> vull;
typedef vector<string> vs;
 
typedef vector<vi> vvi;
typedef vector<vui> vvui;
typedef vector<vll> vvll;
typedef vector<vull> vvull;
typedef vector<vs> vvs;
 
typedef string ss;
#define forr(i,b) for(int i = 0; i < b; i++)
#define ford(i,b) for(int i = b; i >= 0; i--)
#define fore(v,a) for(auto& v:a)
#define ff for(;;)
#define pb push_back
#define bb(a,b,c) max(min(b,c),a)

template<typename T> int sgn(T val) { return (T(0) < val) - (val < T(0)); }
int gcd(int a, int b) { if(a == 0) return b; return gcd(b % a, a); }
int ncr(int n, int k) { int r = 1; if(k > n - k) k = n - k; for(int i=0;i<k;i++) { r *= n - i; r /= i + 1; } return r; }
template<typename T> void printa(vector<T> arr) { for(ui i = 0; i < arr.size(); i++) if(i != arr.size() - 1) cout << arr[i] << ' '; else cout << arr[i] << '\n'; }
bool fn(ss s, char c) { return s.find(c) != ss::npos; }
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    vs s(3);
    unordered_multiset<char> check;
    forr (i, 3)
        cin >> s[i];

    for (char c : s[0])
        check.insert(c);
    for (char c : s[1])
        check.insert(c);

    bool totally = true;
    for (char c : s[2]) {
        if (check.count(c)) {
            const auto it = check.find(c);
            if (it != check.end())
                check.erase(it);
        } else {
            totally = false;
            break;
        }
    }
    totally &= !check.size();

    cout << (totally ? "YES" : "NO") << '\n';

    return 0;
}
