class Solution {
public:
    bool isAnagram(string s, string t) {
        // 
        
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
