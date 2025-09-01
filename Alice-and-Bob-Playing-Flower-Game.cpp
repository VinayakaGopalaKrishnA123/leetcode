class Solution {
public:
    long long flowerGame(int n, int m) {
        long long en=n/2,on=n-en,em=m/2,om=m-em;
        return en*om+on*em;
    }
};