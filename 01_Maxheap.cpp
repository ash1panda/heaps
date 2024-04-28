/*CODE by Ashutosh Panda*/
/*
1.) What is Maxheap. --> Default heap that is created when we use priority_queue --> Max element will always come to top
2.) push, pop, top operations in Maxheap.
3.) Finding a specific element in Maxheap.
4.) TC(top)-O(1)   
5.) TC(push)=O(log(n))  -->  when an element is pushed into MaxHeap (all the other elements are rearranged) again max element is found from the MaxHeap (in log(n) time) and that elemnent is brough to top of MaxHeap
6.) TC(pop)=O(log(n))
*/
#include<bits/stdc++.h>
#include<queue>
#include<iostream>
using namespace std;

int main()
{
    priority_queue<int>pq;
    pq.push(12);
    pq.push(18);
    pq.push(2);
    cout << "Size of Priority Queue: "<< pq.size() << endl;
    cout << "Top Element (Max Element): " << pq.top()<< endl;
    pq.pop(); // Top element (Max Element is Removed from MaxHeap)
    cout << "Top Element (Max Element after popping): " << pq.top()<< endl;  // Top Element updated after popping 
    

    
   

return 0;
}

/*
Time Complexity: 
Space Complexity: 
[Don't mind if I have not mentioned both of these :) ]
*/