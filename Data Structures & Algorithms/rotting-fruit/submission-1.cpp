class Solution {
public:
bool valid( int n, int m, int x, int y) {
        return ((x>=0 && x<n) && (y>=0 && y<m));
    }
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int,int> > q;
        vector<int> dr{0,0,-1,1}, dc{1,-1,0,0};
        int n = grid.size(), m = grid[0].size();
        vector< vector<int> > vis(n,vector<int>(m, INT_MAX));
      
      cout << n << " " << m << endl;

        for (int i=0 ; i<n ; i++) {
            for (int j=0 ; j<m ;j++){
                cout << grid[i][j] << " ";
                if(grid[i][j] == 2) {
                // cout << "is";
                q.push(make_pair(i,j));
                vis[i][j] = 0;}
            }
        }

        cout << endl;

        // while(!treasure.empty()) {
            // int x, y;
            // x = treasure.front().first;
            // y = treasure.front().second;

            // treasure.pop();

            // q.push({x,y});
            int dis=1;
            int ans=0;
            while(!q.empty()) {
cout << "Hey";
                int sz = q.size();
                while(sz--) {
                int curx = q.front().first;
                int cury = q.front().second;
                q.pop();

                for (int i =0 ; i<4;i++) {
                    int nx = dr[i]+curx;
                    int ny = dc[i]+cury;
                    if (valid(n,m,nx,ny)) {
                        if(grid[nx][ny] == 1 && vis[nx][ny] > dis ) {
                            // cout << nx << " " << ny << " " << dis <<  endl;
                            vis[nx][ny] = min(dis, vis[nx][ny]);
                                        cout << "hey";
                            grid[nx][ny] = 2;
                            // vis[nx][ny] = true;
                            q.push({nx,ny});
                        }
                    }
                }
                }

                

                dis++;
            }

            bool check = true;
            int max_time = 0;
            for (int i=0 ; i<n ; i++) {
                for (int j= 0 ; j < m ; j++)
                cout << vis[i][j] << " " << grid[i][j] << '\t';

                cout << endl;
            }

            for (int i=0 ; i< n ; i++) for (int j =0 ; j<m ; j++){ 
                check = (grid[i][j] != 1) && check;
                if (grid[i][j] == 2) max_time = max(max_time, vis[i][j]);
            }
            

            return (check) ? max_time : -1;

        
    }
    
};
