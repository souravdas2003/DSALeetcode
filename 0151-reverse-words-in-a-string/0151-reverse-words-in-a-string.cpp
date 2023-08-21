class Solution {
public:
    string reverseWords(string s) {
        stringstream all(s); 
        string word,ans = "";
        while (all >> word)
        {
            ans = word + " " + ans;
        }
        ans.pop_back(); // remove last space.
         return ans;
    }
};