class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.length();
        int m = t.length();

        unordered_map<char,int>freq1;
        unordered_map<char,int>freq2;

        if(n!=m)return false;

        for(int i = 0; i < n; i++){
            freq1[s[i]]++;
        }

        for(int i = 0; i < m; i++){
            freq2[t[i]]++;
        }

        if(freq1 == freq2){
            return true;
        }
        return false;
    }
};
