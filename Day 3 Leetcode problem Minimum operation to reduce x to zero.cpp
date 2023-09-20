#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n = nums.size();
        int target = -x;  
        for (int num : nums) {
            target += num;
        }
        
        if (target == 0) return n; 
        
        int maxLen = -1;
        int currentSum = 0;
        int left = 0;
        
        for (int right = 0; right < n; ++right) {
            currentSum += nums[right];
            
            while (currentSum > target && left <= right) {
                currentSum -= nums[left];
                left++;
            }
            
            if (currentSum == target) {
                maxLen = max(maxLen, right - left + 1); 
            }
        }
        
        return maxLen == -1 ? -1 : n - maxLen;  
    }
};

int main() {
    Solution solution;
    vector<int> nums;
    int x ;
    int n;
    cin>>n>>x;
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        nums.push_back(m);
    }
    int result = solution.minOperations(nums, x);
    cout << "Minimum Operations: " << result << endl;
    return 0;
}
