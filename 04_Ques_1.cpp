// QUESTION - FIND Kth SMALLEST ELEMENT IN AN ARRAY

/*CODE by Ashutosh Panda*/

#include<bits/stdc++.h>
#include<iostream>
#include<queue>
using namespace std;


// First approach 
// TC-O(log(n!)) ~ O(nlog(n))  
// SC-O(n)
int minHeapApp(vector<int> vec, int k){
    priority_queue< int, vector<int>, greater<int> > pq;
    for(int i=0; i<vec.size(); i++){
        pq.push(vec[i]);
    }
    for(int i=0; i<k-1; i++){
        pq.pop();
    }
    return pq.top();
}



int main()
{
    vector <int> vec = {10, 20, -4, 6, 18, 2, 105, 111};
    int k=3;
    cout << k << "th largest element is: " << minHeapApp(vec, k);

    

    

return 0;
}

/*
Time Complexity: 
Space Complexity: 
[Don't mind if I have not mentioned both of these :) ]
*/