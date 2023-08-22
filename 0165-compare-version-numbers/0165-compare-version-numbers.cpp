class Solution {
public:
    int compareVersion(string version1, string version2) {
        int n = version1.size(), m = version2.size();
        for (int i = 0, j = 0; i < n || j < m; i++, j++) {
            size_t p = 0;
            int a = ((i >= n) ? 0 : stoi(version1.substr(i), &p));
            i += p;
            int b = ((j >= m) ? 0 : stoi(version2.substr(j), &p));
            j += p;
            if (a > b) return 1;
            if (a < b) return -1;
        }
        return 0;
    }
};