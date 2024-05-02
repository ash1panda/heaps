// QUESTION_9 LAST STONE WEIGHT

// LC - https://leetcode.com/problems/last-stone-weight/description/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> maxHeap;

        for(int i=0; i<stones.size(); i++){
            maxHeap.push(stones[i]);
        }

        while(maxHeap.size() > 1){ 
            int x = maxHeap.top();
            maxHeap.pop();
            int y = maxHeap.top();
            maxHeap.pop();
            if(x!=y){
                maxHeap.push(abs(x-y));
            }
        }

        if(maxHeap.empty()) return 0;
        else{
            return maxHeap.top();
        }
        
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