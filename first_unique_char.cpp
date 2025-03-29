#include <bits/stdc++.h>
using namespace std;
// Problem: First Unique Character in a String

class Solution {
    public:
        int firstUniqChar(string s) {
            unordered_map<char, pair<int,int>> mpp;
            int n = s.size();
            for(int i=0; i<n; i++){
                mpp[s[i]].first++;
                mpp[s[i]].second = i;
            } 
            for(int j=0; j<n; j++){
                if(mpp[s[j]].first == 1)
                return mpp[s[j]].second;
            }
            return -1;
        }
    };