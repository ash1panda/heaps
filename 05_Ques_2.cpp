// QUESTION_2 - FIND THE Kth LARGEST ELEMENT IN AN ARRAY
// LC - https://leetcode.com/problems/kth-largest-element-in-an-array/submissions/1244043864/

#include <bits/stdc++.h>
#include <queue>
#include <iostream>
using namespace std;

int findKthLargest(vector<int> &nums, int k)
{
    priority_queue<int, vector<int>, greater<int>> pq;  // We will be using minHeap
    for (int i = 0; i < nums.size(); i++)
    {
        pq.push(nums[i]);
        if (pq.size() > k)
            pq.pop();
    }
    return pq.top();
}

int main()
{
    vector<int>nums = {3,2,1,5,6,4};
    int k = 2;
    cout << k << "th largest element is: "<<findKthLargest(nums, k);

    return 0;
}

/*
Time Complexity: O(nlog(k)) 
Space Complexity: O(k);
[Don't mind if I have not mentioned both of these :) ]
*/