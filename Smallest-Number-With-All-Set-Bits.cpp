class Solution {
public:
    int smallestNumber(int n) {
        int c=0;
        while(n!=0){
            c++;
            n/=2;
        }
        int ans=0;
        while(c!=0){
            ans+=pow(2,c-1);
            c--;
        }
        return ans;
    }
};