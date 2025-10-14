class Solution {
public:
    bool check(vector<int>& v,int k)
    {
        int c1=0,c2=0;
        for(int i=1;i<k;i++)
        {
            if(v[i-1]<v[i])
            {
                c1++;
            }
        }
        for(int i=k;i<v.size()-1;i++)
        {
            if(v[i]<v[i+1])
            {
                c2++;
            }
        }
        if(c1==k-1 && c2==k-1)
        {
            return true;
        }
        return false;
    }
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        vector<int>v;
        for(int i=0;i<k*2;i++)
        {
            v.push_back(nums[i]);
        }
        if(check(v,k)) return true;
        for(int i=k*2;i<nums.size();i++)
        {
            v.erase(v.begin());
            v.push_back(nums[i]);
            if(check(v,k))
            {
                return true;
            }
        }
        return false;
    }
};