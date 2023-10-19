class Solution {
public:
    void subset_calculate(vector<int>nums,vector<int>output,vector<vector<int>>& ans,int i){
        if(i>=nums.size()){
            ans.push_back(output);
            return;
        }
        subset_calculate(nums,output,ans,i+1);
        output.push_back(nums[i]);
        subset_calculate(nums,output,ans,i+1);

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int>output;
        subset_calculate(nums,output,ans,0);
        return ans;
    }
};
