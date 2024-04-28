
// QUESTION_4 - Given an n x n matrix where each of the rows and columns is sorted in ascending order, return the kth smallest element in the matrix.

// LC - https://leetcode.com/problems/kth-smallest-element-in-a-sorted-matrix/description/ 
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int kthSmallest (vector<vector<int>>matrix, int k){

    int n = matrix.size();
    int low = matrix[0][0];
int high = matrix[n - 1][n - 1];

    while(low<high){
        int count = 0;
        int mid = low + (high - low) / 2;

        for(int i=0; i<n; i++){
            count += upper_bound(matrix[i].begin(), matrix[i].end(), mid) - matrix[i].begin(); // this gives the address of element just bigger than mid (upper bound) - the address of the first element of that array = number of elements that are less than mid
        }

        if(count<k){
            // Bigger mid required
            low = mid+1;
        }
        else{
            high = mid;
        }
        
    }
    return low;

}

int main()
{
    vector<vector<int>> vec = {{1,5,9},{10,11,13},{12,13,15}};
    int k = 8;
    cout << k << "th smallest element is: "<<kthSmallest(vec, k);

    

return 0;
}

/*
Time Complexity: 
Space Complexity: 
[Don't mind if I have not mentioned both of these :) ]

Difference between int mid = (high + low) / 2;
                            and 
                    int mid = low + (high - low) / 2;

The expressions int mid = (high + low) / 2; and int mid = low + (high - low) / 2; both calculate the middle index of a range [low, high], commonly used in binary search algorithms. However, they differ slightly in terms of how they handle arithmetic operations, especially when dealing with large numbers or edge cases involving overflow.
1. (high + low) / 2: This expression calculates the sum of high and low and then divides it by 2 to find the middle index. This method is straightforward and easy to understand. However, it can lead to integer overflow issues if high and low are very large numbers, as the sum may exceed the maximum representable value for an integer. This can lead to unexpected behavior and incorrect results.
2. low + (high - low) / 2: This expression first calculates the difference between high and low, then divides it by 2, and finally adds it to low to find the middle index. This method avoids potential overflow issues because we're only dealing with additions and subtractions of potentially large numbers. By subtracting low from high first, we ensure that the result is always within the range of representable integers.
In most cases, both expressions will yield the same result. However, the second expression (low + (high - low) / 2) is generally preferred in scenarios where high and low can be large or where the possibility of overflow exists, as it provides more robustness against integer overflow.
*/