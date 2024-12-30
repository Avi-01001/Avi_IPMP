#include <bits/stdc++.h>
using namespace std;

void moveZerosToEnd(vector<int>& arr) {
    int j = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] != 0) {
            swap(arr[i], arr[j]);
            j++;
        }
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int &x : arr) cin >> x;
    moveZerosToEnd(arr);
    for (int x : arr) cout << x << " ";
    return 0;
}
