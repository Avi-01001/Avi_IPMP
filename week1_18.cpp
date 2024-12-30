#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        int rev = 0, n = x;
        while (n > 0) {
            int r = n % 10;
            if (rev > (INT_MAX - r) / 10) return false; 
            rev = rev * 10 + r;
            n /= 10;
        }
        return rev == x;
    }
};
