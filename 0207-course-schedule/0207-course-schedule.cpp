class Solution {
public:
    bool dfsCheck(int node,   vector<vector<int>> &adj,vector<int> &vis,vector<int> &pathVisit){
        vis[node]=1;
        pathVisit[node]=1;
        for(auto it:adj[node]){
            if(!vis[it]){
                if(dfsCheck(it,adj,vis,pathVisit)==true){
                    return true;
                }
            }
            else if(pathVisit[it]){
                return true;
            }
        }
            pathVisit[node]=0;
            return false;
        
    }
    bool canFinish(int n, vector<vector<int>>& pre) {
         vector<vector<int>> adj(n);
           for(int i = 0 ; i < pre.size() ; i++){
            adj[pre[i][1]].push_back(pre[i][0]);
        }
        vector<int> vis(n,0);
          vector<int> pathVisit(n,0);
       // int vis[n]={0};
     

        for(int i=0;i<n;i++){
            if(!vis[i]){
                if(dfsCheck(i,adj,vis,pathVisit)==true){
                    return false;
                }
            }
        }
        return true;
    }
};