class Solution {
public:
    bool doesAliceWin(string s) {
        for(auto i:s){
           i = tolower(i);
            if (i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u') return true;
        }
        return false;
    }
    
};