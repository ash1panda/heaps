// QUESTION_8 - K CLOSEST PAIR TO ORIGIN 

// We will be given Multiple Coordinates and we have to give the k closest elements to origin 
// (x,y)  --> Their Distance from origin can be given as --> sqrt((x-0)**2 + (y-0)**2)
// LC - https://leetcode.com/problems/k-closest-points-to-origin/description/

#include<bits/stdc++.h>
#include<iostream>
#include<cmath>
using namespace std;


int sq(int num){
    return num*num;
}

vector<vector<int>> kclosestOrigin(vector<vector<int>> vec, int k){

    vector<vector<int>> ans;

    priority_queue<pair<int, vector<int>>> pq;
    for(int i=0; i<vec.size(); i++){
        pq.push({sq(vec[i][0]-0) + sq(vec[i][1]-0), vec[i]});
        if(pq.size()>k) pq.pop();
    }

    while(pq.size()!=0){
        ans.push_back(pq.top().second);
        pq.pop();
    }

    return ans;


}
int main()
{
    vector<vector<int>> points = {{1, 3}, {-2, 2}, {5, -5}, {0, 1}, {2, 2}};
    int k = 3;

    

    cout << "The " << k << " closest points to the origin are:" << endl;
    for(auto point : kclosestOrigin(points, k)){
        cout << "("<<point[0] << ","<< point[1] << ") "; 
    }


return 0;
}

/*
Time Complexity: 
Space Complexity: 
[Don't mind if I have not mentioned both of these :) ]
*/