class Solution {
public:
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        for(auto i:queries){
            auto idx=i[0];
            while(idx<=i[1]){
                nums[idx]=(nums[idx]*1ll*i[3])%((int)(1e9+7));
                idx+=i[2];
            }
        }
        auto ans=nums[0];
        for(int i=1;i<nums.size();i++){
            ans=ans^nums[i];
        }
        return ans;
    }
};