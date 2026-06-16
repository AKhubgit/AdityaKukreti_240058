class Solution{
public:
    int xorAllNums(vector<int>& nums1,vector<int>& nums2){
        int n1=nums1.size();
        int n2=nums2.size();
        int ans=0;

        if(n2%2!=0){
            int i=0;
            while(i<n1){
                ans^=nums1[i];
                i++;
            }
        }

        if(n1%2!=0){
            int j=0;
            while(j<n2){
                ans^=nums2[j];
                j++;
            }
        }

        return ans;
    }
};
