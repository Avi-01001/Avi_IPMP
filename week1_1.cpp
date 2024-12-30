#include <bits/stdc++.h>
using namespace std;

void u_i(vector<int> &a, vector<int> &b) {
    int i = 0, j = 0;
    vector<int> u, in;
    while (i < a.size() && j < b.size()) {
        if (a[i] < b[j]) u.push_back(a[i++]);
        else if (b[j] < a[i]) u.push_back(b[j++]);
        else {
            u.push_back(a[i]);
            in.push_back(a[i]);
            i++, j++;
        }
    }
    while (i < a.size()) u.push_back(a[i++]);
    while (j < b.size()) u.push_back(b[j++]);
    for (int x : u) cout << x << " ";
    cout << endl;
    for (int x : in) cout << x << " ";
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int &x : a) cin >> x;
    for (int &x : b) cin >> x;
    u_i(a, b);
    return 0;
}
