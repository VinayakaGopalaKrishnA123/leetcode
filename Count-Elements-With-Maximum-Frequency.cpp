class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> m;
        int mf=1;
        for(auto i:nums){
            m[i]++;
            mf=max(mf,m[i]);
        }
        int c=0;
        for(auto i:m){
            if(i.second==mf) c++;
        }
        return c*mf;
    }
};