/*CODE by Ashutosh Panda*/

/*
* MinHeap Syntax: priority_queue<int, vector<int>, greater<init>> pq

*/
#include <bits/stdc++.h>
#include<queue>
#include <iostream>
using namespace std;

int main()
{
    // Min Heap for "int" dataType
    priority_queue< int, vector<int>, greater<int>> pq;
    pq.push(0);
    pq.push(10);
    pq.push(-1);
    pq.push(90);
    cout << "Size of Priority Queue: "<< pq.size() << endl;
    cout << "Top Element of Min Heap: "<< pq.top() << endl;
    pq.pop();
    cout << "Top Element of Min Heap (After popping): "<< pq.top() << endl << endl;

    // Min Heap for "double" dataType
    priority_queue< double, vector<double>, greater<double> > pq2;
    pq2.push(-1.023);
    pq2.push(2.99);
    pq2.push(12.0435);
    pq2.push(-89.253);
    cout << "Size of Priority Queue: "<< pq2.size() << endl;
    cout << "Top Element of Min Heap: "<< pq2.top() << endl;
    pq2.pop();
    cout << "Top Element of Min Heap (After popping): "<< pq2.top() << endl;

    // Similarly we can do for pair and long long dataType





    return 0;
}

/*
Time Complexity:
Space Complexity:
[Don't mind if I have not mentioned both of these :) ]
*/