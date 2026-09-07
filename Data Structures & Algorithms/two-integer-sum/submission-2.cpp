class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int,int> map1;
        for(int i=0; i<nums.size(); i++){
            auto t = target-nums[i];
            if(map1.contains(t)){
                return {map1[t],i};
            }
            map1[nums[i]]=i;
        }
        return {};
    }
};
