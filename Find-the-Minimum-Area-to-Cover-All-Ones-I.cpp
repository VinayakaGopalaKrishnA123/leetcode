class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int mir=INT_MAX,mar=INT_MIN;
        int mic=INT_MAX, mac=INT_MIN;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]==1){
                    mir=min(mir,i);
                    mar=max(mar,i);
                    mic=min(mic,j);
                    mac=max(mac,j);
                }
            }
        }
        return (mar-mir+1)*(mac-mic+1);

    }
};