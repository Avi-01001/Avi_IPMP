#include <bits/stdc++.h>
using namespace std;

pair<int, int> findMaxMin(vector<int> &a) {
    int mx = INT_MIN, mn = INT_MAX;
    for (int n : a) {
        mx = max(mx, n);
        mn = min(mn, n);
    }
    return {mx, mn};
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a) cin >> x;
    pair<int, int> res = findMaxMin(a);
    cout << res.first << " " << res.second;
    return 0;
}
