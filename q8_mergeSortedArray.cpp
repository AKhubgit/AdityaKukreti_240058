class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> net;

        int i=0;
        int j=0;
        while(i<m || j<n){
            if(i<m && (j>=n || nums1[i]<=nums2[j])){
                net.push_back(nums1[i]);
                i++;
            }else if(j<n && (i>=m || nums1[i]>nums2[j])){
                net.push_back(nums2[j]);
                j++;
            }
            
        }
        int k=0;
        while(k<m+n){
            nums1[k]=net[k];
            k++;
        }

    }
};
