class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
                if(grid.size()==0)
            return 0;
        queue<pair<int,int>> q;
        int rows=grid.size(), cols=grid[0].size();
        int minutes=0 , total_orng=0 ,total_rotten_orng=0;
        for(int i=0; i<rows; ++i)
        {
            for(int j=0; j<cols; ++j)
            {
                if(grid[i][j]==2)
                    q.push({i,j});
                if(grid[i][j]!=0)
                    total_orng++;
            }
        }
        int dx[4]={0,0,1,-1};
        int dy[4]={1,-1,0,0};
        while(!q.empty())
        {
             int k=q.size();
            total_rotten_orng += k;
            while(k--)
            {  
                int x=q.front().first;
                int y=q.front().second;
                q.pop();
            for(int i=0; i<4; i++)
            {
                int nx=x+dx[i] , ny=y+dy[i];
                if(nx<0 ||ny<0 || nx>=rows || ny>=cols || grid[nx][ny]!=1)
                         continue;
                grid[nx][ny]=2;
                q.push({nx,ny});
              }
            }
            if(!q.empty())
                minutes++;
        }
        return total_orng==total_rotten_orng?minutes:-1;
    }

};
