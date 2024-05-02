// QUESTION_6 - SORT ARRAY BY INCREASING FREQUENCY
// LC - https://leetcode.com/problems/sort-array-by-increasing-frequency/description/

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
 vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int> m;
      
        priority_queue<pair<int, int>> pq;
        
        vector<int> v;
        int n = nums.size();
        
        for (int i = 0; i < n; i++) {
            m[nums[i]]++;
        }
        
        for (auto it : m) {
            pq.push({-1 * it.second, it.first});
        }
        
        while(pq.size() > 0) {
            int freq = -1 * pq.top().first;
            int elem = pq.top().second;
            
            for (int i = 0; i < freq; i++) v.push_back(elem);
            pq.pop();
        }
        
        return v;
    }
    
int main()
{

return 0;
}

/*
Time Complexity: 
Space Complexity: 
[Don't mind if I have not mentioned both of these :) ]
*/