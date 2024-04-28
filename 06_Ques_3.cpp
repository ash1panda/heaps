// QUESTION_3 - SORT A K SORTED ARRAY --> (which means the elements are atmost k times away from their actual sorted position)
// GFG - https://www.geeksforgeeks.org/problems/nearly-sorted-1587115620/1

#include <vector>
#include <queue>
#include <iostream>
using namespace std;

vector<int> nearlySorted(int arr[], int num, int K)
{
    vector<int> ans;
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < num; i++)
    {
        pq.push(arr[i]);
        if (pq.size() > K)
        {
            ans.push_back(pq.top());
            pq.pop();
        }
    }
    while (!pq.size() == 0)
    {
        ans.push_back(pq.top());
        pq.pop();
    }

    return ans;
}
int main()
{
    int arr[] = {6,5,3,2,8,10,9};
    int size = sizeof(arr)/sizeof(int);
    int k = 3;

    vector <int> ans = nearlySorted(arr, size, k); 

    for(int i: ans){
        cout << i << " ";
    }



    return 0;
}

/*
Time Complexity: O(nlog(k))
Space Complexity: O(k)
[Don't mind if I have not mentioned both of these :) ]

In the provided code for finding the  k th largest element in an array, the space complexity is O(n), not O(k). Here's why:
1. Priority Queue ("pq"): The priority queue stores at most  k  elements, not necessarily all  n  elements of the input array "nums". Therefore, its space complexity is O(k), not O(n).
2. Input Array "nums": The input array `nums` is not stored in any additional data structure; it's passed by reference to the "findKthLargest" function. Hence, it doesn't contribute to the space complexity of the function. However, if you consider the space complexity of the entire program, including the input array, then yes, the input array would contribute \( O(n) \) space complexity.
3. Other Variables: The space complexity for other variables is negligible compared to the priority queue and input array and can be considered constant, so they do not affect the overall space complexity.
Therefore, the space complexity of the provided code is primarily O(k) due to the priority queue and O(n)  if considering the input array. The code comment should be corrected accordingly:


*/