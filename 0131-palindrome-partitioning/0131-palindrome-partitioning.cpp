class Solution {
public:
    bool isPalindrome(string S){
        string P = S;
        reverse(P.begin(), P.end());
        if (S == P) return true;
        return false;
    }
    void helper(string s,vector<vector<string>>& ans, vector<string>temp,int ind){
        if(ind==s.size()){
            ans.push_back(temp);
            return;
        }
        string t="";
        for(int i=ind;i<s.size();i++){
            t+=s[i];
            if(isPalindrome(t)){
                temp.push_back(t);
                helper(s,ans,temp,i+1);
                temp.pop_back();
            }
        }
        return;
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> temp;
        helper(s,ans,temp,0);
        return ans;
    }
};