class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        // if(changed.size()==4&&changed[0]==0&&changed[1]==0&&changed[2]==0&&changed[3]==0) return {0,0};
        unordered_map<int,int> mp;
        vector<int> ans;
        sort(changed.begin(),changed.end());
        // 1 2 3 4 6 8
        for(int i=0;i<changed.size();i++){
            
            if(changed[i]%2==0 && mp.find(changed[i]/2)!=mp.end() ){
                if(mp[changed[i]/2]==1) mp.erase(changed[i]/2);
                else mp[changed[i]/2]--;
                ans.push_back(changed[i]/2);
            }
            else mp[changed[i]]++;
        }
        if(mp.size()==0) return ans;
        else return {};
    }
};