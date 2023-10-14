class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int count=0;
        int ones,zeros;
        ones=zeros=0;
        int z=nums.size();
        for(int i=0;i<z;i++){
            if(nums[i]==1){
                ones++;
            }
        }
        if(ones==z){
            return ones-1;
        }
        int ma=0;
        int p=0;
        // for(int i=0;i<z;i++){
        //     if(nums[p]==0){
        //         p++;
        //         continue;
        //     }
        //     if(nums[i]==0){
        //         zeros++;
        //     }
        //     if(zeros>1){
        //         if(ma<count){
        //             ma=count;
        //         }
        //         count=0;
        //         zeros=0;
        //         continue;
        //     }else{
        //         if(nums[i]!=0){
        //             count++;
        //         }
        //     }
        // }
        int right=0;
        int left=0;
        for(int i=0;i<z;i++){
            right++;                //0 1 1 1 0 1 1 0 1 1 1 1 left=5 right=7
            if(nums[p]==0){
                p++;
                continue;
            }
            if(nums[i]==0){
                zeros++;
                if(zeros<2){
                    left=i+1;
                }
            }
            if(zeros>1){
                if(ma<count){
                    ma=count;
                }
                zeros=1;
                count=right-left-1;
                left=i+1;
                // cout<<"count"<<count<<endl;
            }else{
                if(nums[i]!=0){
                    count++;
                }
            }
        }
        return max(ma,count);
    }
};
