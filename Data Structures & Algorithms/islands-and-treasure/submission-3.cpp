class Solution {
public:

    bool valid( int n, int m, int x, int y) {
        return ((x>=0 && x<n) && (y>=0 && y<m));
    }

    void islandsAndTreasure(vector<vector<int>>& grid) {
        // queue<pair<int, int> > treasure;
        queue<pair<int,int> > q;
        vector<int> dr{0,0,-1,1}, dc{1,-1,0,0};
        int n = grid.size(), m = grid[0].size();
        for (int i=0 ; i<n ; i++) {
            for (int j=0 ; j<m ;j++) if(grid[i][j] == 0) q.push(make_pair(i,j));
        }

        // while(!treasure.empty()) {
            // int x, y;
            // x = treasure.front().first;
            // y = treasure.front().second;
            vector< vector<bool> > vis(n,vector<bool>(m, false));

            // treasure.pop();

            // q.push({x,y});
            int dis=1;
            while(!q.empty()) {

                int sz = q.size();
                while(sz--) {
                int curx = q.front().first;
                int cury = q.front().second;
                q.pop();

                for (int i =0 ; i<4;i++) {
                    int nx = dr[i]+curx;
                    int ny = dc[i]+cury;
                    if (valid(n,m,nx,ny)) {
                        if(grid[nx][ny] > 0 && !vis[nx][ny] ) {
                            // cout << nx << " " << ny << " " << dis <<  endl;
                            if (grid[nx][ny] <= dis )
                                continue;

                            grid[nx][ny] = min(grid[nx][ny], dis);
                            vis[nx][ny] = true;
                            q.push({nx,ny});
                        }
                    }
                }
                }

                

                dis++;
            }

            // cout << endl;
        
    }
};
