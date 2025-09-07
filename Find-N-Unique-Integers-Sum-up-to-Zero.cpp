class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> a;
        if(n%2==1) a.push_back(0);
        for(int i=1;i<=n/2;i++){
            a.push_back(i*-1);
            a.push_back(i);
        }
        sort(a.begin(),a.end());
        return a;
    }
};