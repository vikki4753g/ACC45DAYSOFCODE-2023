class Solution {
public:
    int maxArea(vector<int>& height) {
        int h=height.size();
        int ans1=0;
        int ans2=0;
        int max=0;
        int count=0;
        for(int i=h-1;i>=0;i--){
            for(int j=0;j<h;j++){
                if(height[j]>=height[i]){   //1 2
                    ans1=j;
                    break;
                }
            }
            for(int j=h-1;j>=i;j--){
                if(height[j]>=height[i]){
                    count=j;
                    break;
                }
            }
            ans2=((i-ans1)+(count-i))*height[i];
            ans1=0;
            if(ans2>max){
                max=ans2;
                ans2=0;
            }
        }
        return max;
    }
};
