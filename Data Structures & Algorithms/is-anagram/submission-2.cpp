class Solution {
public:
    bool isAnagram(string s, string t) {
        // int n = s.length();
        // int m = t.length();

        // unordered_map<char,int>freq1;
        // unordered_map<char,int>freq2;

        // if(n!=m)return false;

        // for(int i = 0; i < n; i++){
        //     freq1[s[i]]++;
        // }

        // for(int i = 0; i < m; i++){
        //     freq2[t[i]]++;
        // }

        // if(freq1 == freq2){
        //     return true;
        // }
        // return false;

        
        //creating a fized size array of 26 characters if 
        //at last all counts are zero it is anagarma

        if(s.length() != t.length()) return false;

        int count[26] = {0};

        for(int i = 0; i < s.length(); i++){
            count[s[i] - 'a']++;
            count[t[i] - 'a']--;
        }

        for(int i = 0; i < 26; i++){
            if(count[i] != 0) return false;
        }

        return true;
    }
};
