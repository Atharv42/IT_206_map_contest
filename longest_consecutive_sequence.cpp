#include <bits/stdc++.h>
using namespace std;
// Problem: Longest Consecutive Sequence

class Solution {
    public:
        int longestConsecutive(vector<int>& nums) {
            sort(nums.begin(), nums.end());
            int n = nums.size();
            int count=0;
            int max=0;
            for(int i=0; i<n-1; i++){
                if(nums[i] == nums[i+1]) continue;
                if(abs(nums[i]-nums[i+1])==1){
                    count++;
                    if(max<count) max = count;
                } else count = 0;
            }
            if(n>0)
            return max+1;
            return max;
        }
    };