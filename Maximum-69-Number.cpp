class Solution {
public:
    int maximum69Number (int num) {
        string s=to_string(num);
        int in=-1;
        for(int i=0;i<s.size();i++){
            if(s[i]=='6' && in==-1) in=i;
        }
        if(in==-1) return num;
        s[in]='9';
        return stoi(s);
    }
};