class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> set;
        for(auto num : nums){
            if(set.find(num) != set.end()){ //found the element in the set
                return true;
            }
            else{ //first occurrence insert it
                set.insert(num);
            }
        }
        //done with vector
        //no duplicates
        return false;
    }
};