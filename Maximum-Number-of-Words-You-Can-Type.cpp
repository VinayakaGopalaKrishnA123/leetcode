class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        int f=0,ans=0,w=0;
        unordered_map<char,int> m;
        for(auto c:brokenLetters){
            m[c]=1;
        }
        for(auto c:text){
            if(m[c]==1){
                if(f==0) ans++;
                f=1;
            }
            if(c==' '){
                f=0;
                w++;
            }
            
        }
        return w+1-ans;
    }
};