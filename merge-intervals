#include"bits/stdc++.h"
using namespace std;
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        int a=-1,b=-1;
        sort(intervals.begin(),intervals.end());
        for(auto i:intervals)
        {
            if(a==-1 && b==-1)
            {
                a=i[0];
                b=i[1];
            }
            else if(i[0]<=b)
            {
                b=max(b,i[1]);
            }
            else{
                ans.push_back({a,b});
                a=i[0];
                b=i[1];
            }
        }
    ans.push_back({a,b});
        return ans;
    
    }
};