#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string convertToTitle(int n) {
        string s;
        while (n > 0) {
            n--; 
            int r = n % 26;
            s.push_back('A' + r);
            n /= 26;
        }
        reverse(s.begin(), s.end());
        return s;
    }
};
