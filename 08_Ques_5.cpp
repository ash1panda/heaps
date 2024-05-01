// QUESTION_5 - TOP K FREQUENT ELEMENTS IN AN ARRAY
// LC - https://leetcode.com/problems/top-k-frequent-elements/description/

/*
1.) First we will make an element to frequency map
2.) We have to consider every pair of that map
3.) Pair of that map will be <ele,freq>
4.) Since we need to put this pair into heaps so we need to modify it to <freq,ele> as the pair.first is considered in maxHeap and minHeap
5.) Put the modified pairs into minHeap and keep popping if the size of heap exceeds k
*/

#include<bits/stdc++.h>
#include<iostream>
using namespace std;


    vector<int> topKfreqEle(vector<int>nums, int k){
        unordered_map<int, int> mp;
        for(auto i : nums){
            mp[i]++;
        }

        priority_queue< pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> > minHeap;
        for(auto i : mp){
            minHeap.push({i.second, i.first});   // ALWAYS KEEP FREQUENCEY FIRST AND THE ELEMENT SECOND
            if(minHeap.size()>k){
                minHeap.pop();
            }
        }

        vector<int> ans;
        while(minHeap.size()!=0){
            ans.push_back(minHeap.top().second);
            minHeap.pop();
        }

        return ans;


    }
int main()
{
    vector<int> vec = topKfreqEle({1,1,1,2,2,3},2);
    for(auto i : vec){
        cout << i << " ";
    }


return 0;
}

/*
Time Complexity: 
Space Complexity: 
[Don't mind if I have not mentioned both of these :) ]
*/