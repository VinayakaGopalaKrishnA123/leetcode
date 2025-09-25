class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        vector<vector<int>> dp(triangle.size(),vector<int>(triangle[triangle.size()-1].size()));
        dp[0][0]=0;
        for(int i=1;i<triangle.size();i++){
            for(int j=0;j<triangle[i].size();j++){
                if(j==0) dp[i][j]=triangle[i-1][j]+dp[i-1][j];
                else if(j==triangle[i].size()-1)  dp[i][j]=triangle[i-1][j-1]+dp[i-1][j-1];
                else dp[i][j]=min(dp[i-1][j]+triangle[i-1][j],dp[i-1][j-1]+triangle[i-1][j-1]) ;
            }
        }
        int ans=dp[triangle.size()-1][0]+triangle[triangle.size()-1][0];
        for(int j=1;j<triangle[triangle.size()-1].size();j++){
            ans=min(ans,triangle[triangle.size()-1][j]+dp[triangle.size()-1][j]);
        }
        return ans;
    }
};