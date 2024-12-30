#include <bits/stdc++.h>
using namespace std;

void findTwo(int a[], int n) {
    int xr = 0, x = 0, y = 0;
    for (int i = 0; i < n; i++) xr ^= a[i];
    for (int i = 1; i <= n - 2; i++) xr ^= i;
    int sb = xr & -xr;
    for (int i = 0; i < n; i++) {
        if (a[i] & sb) x ^= a[i];
        else y ^= a[i];
    }
    for (int i = 1; i <= n - 2; i++) {
        if (i & sb) x ^= i;
        else y ^= i;
    }
    cout << x << " " << y;
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    findTwo(a, n);
    return 0;
}
