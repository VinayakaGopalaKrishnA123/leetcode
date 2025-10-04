class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0,j=height.size()-1;
        int Max=0;
        while(i<j)
        {
            Max=max(Max,min(height[i],height[j])*(j-i));
            if(height[i]<height[j])
            {
                i++;
            }
            else if(height[i]>height[j])
            {
                j--;
            }
            else
            {
                if(height[j-1]>height[i+1])
                {
                    i++;
                }
                else
                {
                    j--;
                }
            }
        }
        return Max;
    }
};