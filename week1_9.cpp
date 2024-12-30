#include<bits/stdc++.h>
using namespace std;
vector<int> findOddOccurrences(vector<int> &a) {
    int xr = 0, x = 0, y = 0;
    for (int n : a) xr ^= n;
    int sb = xr & -xr;
    for (int n : a) {
        if (n & sb) x ^= n;
        else y ^= n;
    }
    return {x, y};
}