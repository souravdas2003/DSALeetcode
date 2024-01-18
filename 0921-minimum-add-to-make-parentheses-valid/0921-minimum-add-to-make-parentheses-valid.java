class Solution {
    public int minAddToMakeValid(String S) {
        while(S.contains("()")) {
               S= S.replace("()","");
        }
        return S.length();
}
}