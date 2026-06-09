class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int i=1;
        int curr=nums[0];
        int pos=1;
        while(i<nums.size()){
            if(nums[i]!=curr){
                nums[pos]=nums[i];
                curr=nums[i];
                pos++;
            }
            i++;
        }

        return pos;



    }
};
