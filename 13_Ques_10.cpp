/*CODE by Ashutosh Panda*/

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
long long minCost(long long arr[], long long n)
{
    priority_queue<long long, vector<long long>, greater<long long>> pq;
    for (long long i = 0; i < n; i++)
    {
        pq.push(arr[i]);
    }

    long long ans = 0;

    while (pq.size() > 1)
    {
        long long x = pq.top();
        pq.pop();
        long long y = pq.top();
        pq.pop();
        ans += (x + y);
        pq.push(x + y);
    }

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