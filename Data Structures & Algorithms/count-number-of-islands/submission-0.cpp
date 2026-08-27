class Solution {
public:

    void dfs(vector<vector<char>>& grid , int r , int c){

        grid[r][c] = '0';

        int dr[] = {-1,1 ,0,0};
        int dc[] = {0,0,-1,1};

        for(int k =0; k < 4 ; k++){
            int nr = r + dr[k];
            int nc = c + dc[k];

            if(nr >= 0 && nr < grid.size() &&
               nc >= 0 && nc < grid[0].size() &&
               grid[nr][nc] == '1') {

                dfs(grid,nr, nc);
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {

        int row = grid.size();
        int col = grid[0].size();
        int count=0;

    for(int i =0; i < row ;i++){
        for(int j=0; j < col ; j++){
             if(grid[i][j] =='1'){
            count++;
        
        dfs(grid , i , j);
             }
        }
    }
        return count;
        
    }
};
