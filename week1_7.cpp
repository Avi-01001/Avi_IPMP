#include<bits/stdc++.h>
using namespace std;
int Solution::repeatedNumber(const vector<int> &A) {
    int n = A.size();
    if (n == 0) return -1;

    int c1 = 0, c2 = 0, n1 = -1, n2 = -1;

    for (int x : A) {
        if (x == n1) c1++;
        else if (x == n2) c2++;
        else if (c1 == 0) n1 = x, c1 = 1;
        else if (c2 == 0) n2 = x, c2 = 1;
        else c1--, c2--;
    }

    c1 = c2 = 0;
    for (int x : A) {
        if (x == n1) c1++;
        else if (x == n2) c2++;
    }

    if (c1 > n / 3) return n1;
    if (c2 > n / 3) return n2;
    return -1;
}
