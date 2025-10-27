class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int ans=0;
        vector<int>v;
        for(auto s:bank){
            int cnt=count(s.begin(),s.end(),'1');
            // cout<<cnt<<' ';
            if (cnt>0) {
                v.push_back(cnt);
                if (v.size()==2) {
                    ans+=v[1]*v[0];
                    v.erase(v.begin());
                }
            }
        }
        return ans;
    }
};