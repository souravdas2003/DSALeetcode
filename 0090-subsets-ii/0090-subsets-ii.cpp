class Solution {
public:
    vector<vector<int>>ans;
    void print_combo(int ind,vector<int>&v,vector<int>&ds){
        ans.push_back(ds);
        for(int i=ind;i<v.size();i++){
            if(i>ind && v[i]==v[i-1]) continue;
            // if(v[i]>target) break;
            ds.push_back(v[i]);
            print_combo(i+1,v,ds);
            ds.pop_back();

        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>ds;
        print_combo(0,nums,ds);
        return ans;
    }
};