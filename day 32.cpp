class Solution {
public:
    void solve(vector<int> nums,vector<int> output,set<vector<int>>& ans1,int i){
        //base case
        if(i>=nums.size()){
            sort(output.begin(),output.end());
            ans1.insert(output);
            return;
        }
        //exclude
        solve(nums,output,ans1,i+1);

        //include
        output.push_back(nums[i]);
        solve(nums,output,ans1,i+1);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>output;
        set<vector<int>> ans1;
        solve(nums,output,ans1,0);
        for(vector<int> num:ans1){
            ans.push_back(num);
        }
        return ans;
    }
};
