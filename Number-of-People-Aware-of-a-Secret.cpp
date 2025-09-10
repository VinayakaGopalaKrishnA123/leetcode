class Solution {
public:
    int peopleAwareOfSecret(int n, int delay, int forget) {
        vector<long long> dp(n);
        dp[0]=1;
        long long mod = 1e9+7;
        long long sum=0;
        for(int i=1;i<n;i++){
            for(int j=i-forget+1;j<=i-delay;j++){
                if(j>=0){
                    dp[i]+=(dp[j]%mod);
                }
            }
        }
        for(int i=n-forget;i<n;i++){
           
            sum=(sum+dp[i])%mod;
        }
        return sum;
    }
};