class Solution{
public:
    int countSquares(vector<vector<int>>& matrix){
        int n=matrix.size(),m=matrix[0].size(),ans=0;
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=0;j<m;j++){
                sum+=matrix[i][j];
                matrix[i][j]=sum;
            }
        }
        for(int j=0;j<m;j++){
            int sum=0;
            for(int i=0;i<n;i++){
                sum+=matrix[i][j];
                matrix[i][j]=sum;
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                for(int k=1.;;k++){
                    if(i-k+1<0 && j-k+1<0) break; 
                    int t1=(i-k>=0)?matrix[i-k][j]:0;
                    int t2=(j-k>=0)?matrix[i][j-k]:0;
                    int t3=(i-k>=0&&j-k>=0)?matrix[i-k][j-k]:0;
                    if(matrix[i][j]-t1-t2+t3==k*k) ans++;
                }
            }
        }
        return ans;
    }
};