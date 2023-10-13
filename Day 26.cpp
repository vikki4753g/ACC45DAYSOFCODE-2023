int longestOnes(vector<int>& A, int K) {
        int left = 0, right = 0, maxOnes = 0, zeroCount = 0;
        
        while (right < A.size()) {
            if (A[right] == 0) {
                zeroCount++;
            }
            
            while (zeroCount > K) {
                if (A[left] == 0) {
                    zeroCount--;
                }
                left++;
            }
            
            maxOnes = max(maxOnes, right - left + 1);
            right++;
        }
        
        return maxOnes;
    }
