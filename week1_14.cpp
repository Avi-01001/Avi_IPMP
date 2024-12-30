#include <bits/stdc++.h>
using namespace std;

void rearrange(vector<int>& arr) {
    int n = arr.size();
    vector<int> pos, neg;
    
    for (int x : arr) {
        if (x >= 0) pos.push_back(x);
        else neg.push_back(x);
    }

    int i = 0, j = 0, k = 0;
    while (i < pos.size() && j < neg.size()) {
        arr[k++] = pos[i++];
        arr[k++] = neg[j++];
    }

    while (i < pos.size()) arr[k++] = pos[i++];
    while (j < neg.size()) arr[k++] = neg[j++];
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int &x : arr) cin >> x;
    rearrange(arr);
    for (int x : arr) cout << x << " ";
    return 0;
}
