class Solution {
public:
    int missingNumber(vector<int>& nums) {

        sort(nums.begin(),nums.end());

        int i=0;
        int ans=nums.size();
        while(i<nums.size() && ans==nums.size()){

            if(nums[i]!=i){
                ans=i;
            }
            i++;
        }

        return ans;
        
    }
};
