class Solution {
public:
    vector<int> twoSum(vector<int>& ar, int target) {
        int n= ar.size();
        unordered_map<int,int> m; 
        for(int i=0;i<n;i++){
           if(m.find(target-ar[i])  != m.end()){
              return {i, m[target-ar[i]]};
           }
            m[ar[i]] = i;
        }
        return {-1};
    }
};