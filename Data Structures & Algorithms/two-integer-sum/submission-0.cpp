class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int,int> map1;
        for(int i=0; i<nums.size(); i++){
            auto t = map1.find(target-nums[i]);
            if(t != map1.end()){
                return {t->second,i};
            }
            map1[nums[i]]=i;
        }
        return {};
    }
};
