#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int titleToNumber(string title) {
        int n=title.length();int x=0;
        for(int i=0;i<n;i++)
        {
            x=x*26+(title[i]-'A'+1);
        }
        return x;
    }
};