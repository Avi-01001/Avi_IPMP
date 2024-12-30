#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, r = 0;
    cin >> n;
    vector<int> a(n);
    for (int &x : a) cin >> x;
    for (int x : a) r ^= x;
    cout << r;
    return 0;
}
