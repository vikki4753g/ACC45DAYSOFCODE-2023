class Solution {
public:
    // vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
    // }
    std::vector<int> intersection(std::vector<int>& nums1, std::vector<int>& nums2) {
    std::unordered_set<int> numSet(nums1.begin(), nums1.end());
    std::vector<int> result;

    for (const auto& num : nums2) {
        if (numSet.find(num) != numSet.end()) {
            result.push_back(num);
            numSet.erase(num);
        }
    }

    return result;
}

};
