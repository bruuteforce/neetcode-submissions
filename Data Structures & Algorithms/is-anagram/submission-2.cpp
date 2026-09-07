class Solution {
public:
    bool isAnagram(string s, string t) {
        
        //size mismatch
        if(s.size() != t.size()) return false;
    
        int array[26] = {0}; //diff count

        for(int i=0; i<s.size(); i++){
            array[s[i]-'a']++; //found in s
            array[t[i]-'a']--; //found in t
        }

        //for the anagram all 26 elements should be 0
        for(int i=0; i<26; i++){
            if(array[i]) return false;  //non zero
        }

        //anagram
        return true;
    }
};
