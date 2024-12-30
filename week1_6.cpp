#include<bits/stdc++.h>
using namespace std;
vector<int> Solution::repeatedNumber(const vector<int> &a) {
    int n = a.size(), xr = 0, x = 0, y = 0;
    for (int i = 0; i < n; i++) xr ^= a[i];
    for (int i = 1; i <= n; i++) xr ^= i;
    int sb = xr & -xr;
    for (int i = 0; i < n; i++) {
        if (a[i] & sb) x ^= a[i];
        else y ^= a[i];
    }
    for (int i = 1; i <= n; i++) {
        if (i & sb) x ^= i;
        else y ^= i;
    }
    for (int i = 0; i < n; i++) {
        if (a[i] == x) return {x, y};
    }
    return {y, x};
}
