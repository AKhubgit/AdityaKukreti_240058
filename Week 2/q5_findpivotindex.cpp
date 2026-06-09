class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        int sum=0;
        while(i<n){
            sum+=nums[i];
            i++;
        }

        int j=0;
        while(j<n){
            sum-=nums[j];
            if(sum==0){
                return j;
            }
            sum-=nums[j];
            j++;
        }

        return -1;
    }
};
