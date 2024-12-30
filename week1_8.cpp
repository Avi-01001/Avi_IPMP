#include <bits/stdc++.h>
using namespace std;

vector<int> findUniqueNumbers(vector<int> &a) {
    int xr = 0, x = 0, y = 0;
    for (int n : a) xr ^= n;
    int sb = xr & -xr;
    for (int n : a) {
        if (n & sb) x ^= n;
        else y ^= n;
    }
    return {x, y};
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a) cin >> x;
    vector<int> res = findUniqueNumbers(a);
    cout << res[0] << " " << res[1];
    return 0;
}
