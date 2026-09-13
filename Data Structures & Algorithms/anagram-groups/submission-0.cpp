class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> Map;

        for(auto s : strs){
            auto key = s;
            sort(key.begin(),key.end());
            Map[key].push_back(s);
        }

        vector<vector<string>> result;
        for(auto pair : Map){
            result.push_back(std::move(pair.second));
        }

        return result;
    }
};
