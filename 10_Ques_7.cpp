// QUESTION_7 - FIND K CLOSEST ELEMENT 
// LC - https://leetcode.com/problems/find-k-closest-elements/description/

/*
Algorithm:
1.) Find the absolute difference of the specific array element with x, pair it with that element, push <diff,ele> into MaxHeap
2.) If size of MaxHeap exceeds k, pop the top pair
3.) Comparison of the max pair takes place in the following way in MaxHeap
    * First of all the pair.first element is compared and based on maximum pair.first that pair is sent to top (then further popped based on condition)
    * If the pair.first is same for 2 or more elements, then maximum pair.second is found and sent to top (further popped based on condition)

Remember -> You have to give the answer in sorted manner
*/

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
 vector<int> findClosestElements(vector<int>& arr, int k, int x) {
      priority_queue< pair<int,int>>pq;
      for(int i=0; i<arr.size(); i++){
        pq.push({abs(arr[i]-x), arr[i]});
        if(pq.size()>k) pq.pop();
      }

      vector<int> ans;
      while(!pq.empty()){
        ans.push_back(pq.top().second);
        pq.pop();
      }

      sort(ans.begin(), ans.end());

      return ans;
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