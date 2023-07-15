class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& ar) {
        int n=ar.size();
        sort(ar.begin(),ar.end());
        vector<vector<int>> ans;
        for(int i=0;i<n;i++){
            if(ans.empty() || ar[i][0]>ans.back()[1]){
                ans.push_back(ar[i]);
            }
            else{
                int end=ar[i][1];
                end=max(end,ans.back()[1]);
                ans.back()[1]=end;
            }
        }
        return ans;
    }
};