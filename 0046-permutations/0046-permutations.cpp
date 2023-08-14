class Solution {
public:
    void recur(int index, vector<int>&nums, vector<vector<int>>&ans){
        if(index==nums.size()){
            ans.push_back(nums);
            return;
        }
        
        for(int i=index; i<nums.size(); ++i){
            swap(nums[index], nums[i]);
            recur(index+1, nums, ans);
            swap(nums[index], nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        int index = 0;
        recur(index, nums, ans);
        return ans;
    }
};