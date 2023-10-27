#include <bits/stdc++.h>

using namespace std;
 
// Function to find the largest sum
// subarray such that it contains K
// consecutive elements

int maximumSum(vector<int> A, int N,

               int K)
{

    // Stores sum of subarray having

    // K consecutive elements

    int curr_sum = 0;
 

    // Stores the maximum sum among all

    // subarrays of size K having

    // consecutive elements

    int max_sum = INT_MIN;
 

    // Traverse the array

    for (int i = 0; i < N - K + 1; i++) {
 

        // Store K elements of one

        // subarray at a time

        vector<int> dupl_arr(

            A.begin() + i,

            A.begin() + i + K);
 

        // Sort the duplicate array

        // in ascending order

        sort(dupl_arr.begin(),

             dupl_arr.end());
 

        // Checks if elements in subarray

        // are consecutive or not

        bool flag = true;
 

        // Traverse the k elements

        for (int j = 1; j < K; j++) {
 

            // If not consecutive, break

            if (dupl_arr[j]

                    - dupl_arr[j - 1]

                != 1) {

                flag = false;

                break;

            }

        }
 

        // If flag is true update the

        // maximum sum

        if (flag) {

            int temp = 0;
 

            // Stores the sum of elements

            // of the current subarray

            curr_sum = accumulate(

                dupl_arr.begin(),

                dupl_arr.end(), temp);
 

            // Update the max_sum

            max_sum = max(max_sum,

                          curr_sum);
 

            // Reset curr_sum

            curr_sum = 0;

        }

    }
 

    // Return the result

    return max_sum;
}
 
// Driver Code

int main()
{

    vector<int> arr = { 10, 12, 9, 8, 10,

                        15, 1, 3, 2 };

    int K = 3;

    int N = arr.size();

    cout << maximumSum(arr, N, K);
 

    return 0;
}
