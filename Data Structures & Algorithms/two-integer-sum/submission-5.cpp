class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mp={};
        
        
        for(int i=0; i<nums.size();i++)
        {
            int l=target-nums[i];
            if(mp.find(l)!=mp.end())
          {
             return{mp[l],i};
        }
        mp[nums[i]]=i;
        } 
        return {}; 
    }
};
