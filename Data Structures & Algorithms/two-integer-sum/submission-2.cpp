class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         
         unordered_map<int,int>mp;

         for(int i=0;i<nums.size();i++)
         {
            if(mp.find(target-nums[i])!=mp.end())
            {
                //that means we have found a pair 
                return {mp[target-nums[i]],i};
            }
            
            //create an entry in map
            mp[nums[i]]=i;
         }

         return {-1,-1}; // if no pair is found 

    }
};
