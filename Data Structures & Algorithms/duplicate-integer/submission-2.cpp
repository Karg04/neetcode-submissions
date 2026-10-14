class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        
        unordered_map<int,int>freq;
        for(auto it : nums){
            freq[it]++;
        }
        
        for(auto it : freq){
            if(it.second > 1){
                return true;
            }
        }

        return false;
    }
};