#include <bits/stdc++.h>
using namespace std;

void segregate(vector<int>& arr) {
    int i = 0, j = arr.size() - 1;
    while (i < j) {
        if (arr[i] % 2 == 0) i++;
        else if (arr[j] % 2 != 0) j--;
        else swap(arr[i], arr[j]);
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int &x : arr) cin >> x;
    segregate(arr);
    for (int x : arr) cout << x << " ";
    return 0;
}
