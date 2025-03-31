#include <bits/stdc++.h>
using namespace std;

// Function to find the k most frequent elements in an array


class Solution {
    public:
        vector<int> topKFrequent(vector<int>& nums, int k) {
            unordered_map<int, int> hash;
            int n = nums.size();
    
            for(int i=0; i<n; i++){ //hash table
                hash[nums[i]]++;
            }
    
            vector<pair<int, int>> arr; //swichting key and frequency
            for(auto it : hash){
                arr.push_back({it.second, it.first});
            }
            hash.clear();
            sort(arr.rbegin(), arr.rend());//sort decresing order w.r.t frequency
    
            vector<int> ans; 
            for(int i=0; i<k; i++){  //saving the most freq el. in ans vector
                ans.push_back(arr[i].second);
            }
    
        return ans;
        }
    };