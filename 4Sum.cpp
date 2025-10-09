class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        set<vector<int>>s;
        sort(nums.begin(),nums.end());
        if(n<4){
            return {};
        }
        for(int i=0;i<n-3;i++){
            for(int j=i+1;j<n-2;j++){
                for(int k=j+1;k<n-1;k++){   
                    long long tt=(nums[i]*1ll+nums[j]*1ll+nums[k]*1ll);
                    long long required=target*1ll-tt;
                    int l=k+1,h=n-1;
                    while(l<=h){
                        int m=(l+h)/2;
                        if(nums[m]<required){
                            l=m+1;
                        }
                        else if(nums[m]>required){
                            h=m-1;
                        }
                        else{
                            s.insert({nums[i],nums[j],nums[k],nums[m]});
                            break;
                        }
                    }
                }
            }
        }
        vector<vector<int>>v;
        for(auto &i:s){
            v.push_back(i);
        }
        return v;
    }
};