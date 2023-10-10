int maxOperations(vector<int>& nums, int k) {
    unordered_map<int, int> freq;
    int count = 0;
    
    for (int num : nums) {
        int complement = k - num;
        if (freq.find(complement) != freq.end() && freq[complement] > 0) {
            count++;
            freq[complement]--;
        } else {
            freq[num]++;
        }
    }
    
    return count;
}
