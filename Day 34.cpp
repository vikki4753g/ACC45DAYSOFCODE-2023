class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int size1=nums1.size();
        int size2=nums2.size();
        vector<int>nums3;
        int i=0;int j=0;
        while(i<size1 && j<size2){
            if(nums1[i]<nums2[j]){
                nums3.push_back(nums1[i]);
                i++;
            }else{
                nums3.push_back(nums2[j]);
                j++;
            }
        }
        while(i<size1){
            nums3.push_back(nums1[i]);
            i++;
        }
        while(j<size2){
            nums3.push_back(nums2[j]);
            j++;
        }
        int size3=nums3.size();
        if(size3%2==0){
            size3=size3/2;
            double m=nums3[size3]+nums3[size3-1];
            m=m/2;
            return m;
        }else{
            size3=size3/2;
            // size3++;
            double m=nums3[size3];
            return m;
        }
    }
};
