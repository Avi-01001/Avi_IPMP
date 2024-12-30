#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, s = 0;
    cin >> n;
    vector<int> a(n - 1);
    for (int &x : a) cin >> x, s += x;
    cout << n * (n + 1) / 2 - s;
    return 0;
}
