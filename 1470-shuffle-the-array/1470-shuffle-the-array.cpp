class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int i=0;
        int j=n;
        
        vector<int> res;
        while(j<nums.size()){
            res.push_back(nums[i]);
            res.push_back(nums[j]);
            i++;
            j++;
        }
        return res;
    }
};