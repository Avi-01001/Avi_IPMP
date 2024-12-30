#include<bits/stdc++.h>
using namespace std;
int firstMissingPositive(vector<int>&A) {
        int n1=A.size();
    for (int i = 0; i < n1; i++) {
        while (A[i] > 0 && A[i] <= n1 && A[A[i] - 1] != A[i]) {
            swap(A[i], A[A[i] - 1]);
        }
    }
    for (int i = 0; i < n1; i++) {
        if (A[i] != i + 1) return i + 1;
    }
    return n1 + 1;
}