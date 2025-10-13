class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string> v;
        v.push_back(words[0]);
        for(int i=1;i<words.size();i++){
            string check=v.back();
            sort(check.begin(),check.end());
            string cur=words[i];
            sort(cur.begin(),cur.end());
            if(cur!=check){
                v.push_back(words[i]);
            }
        }
        return v;
    }
};