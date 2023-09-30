class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==val){
                count++;
            }
        }
        int ans=(nums.size())-count;
        sort(nums.begin(),nums.end());
        int j=nums.size()-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==val){
                nums[i]=nums[j];
                j--;
            }
        }
        return ans;
    }
};
