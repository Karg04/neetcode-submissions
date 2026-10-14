class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        bool flag = false;
        unordered_map<int,int>freq;
        for(auto it : nums){
            freq[it]++;
        }
        
        for(auto it : freq){
            if(it.second > 1){
                flag = 1;
            }
        }

        return true ? flag : false;
    }
};