class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int i=0;
        int n=nums.size();
        int ans=0;
        while(i<n){
            ans=(nums[i])^(ans);
            i++;
        }

        return ans;
    }
};
