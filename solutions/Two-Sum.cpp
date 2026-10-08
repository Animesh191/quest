// LeetCode: Two Sum
// Language: cpp

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
       vector<int> fin_ans;
       map<int,int> mp;
        
       for(int i = 0; i < nums.size(); i++)
       {
           int left = target - nums[i];
           
           if(mp.find(left)!=mp.end())
           {
               fin_ans = {mp[left]-1,i};
               break;
           }
           else
           {
               mp[nums[i]] = i+1;
           }
       }
        
      return fin_ans;
         
    }
};
