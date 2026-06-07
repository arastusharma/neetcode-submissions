class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
         
        //Another approach using hashset 
        unordered_set<int>st;
        for(int num:nums)
        {
            if(st.count(num))
            {
                return true;
            }
            st.insert(num);
        }
         return false;
    }
};