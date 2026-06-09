class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> a;
        int i=0;
        int sum=0;
        while(i<nums.size()){
            sum+=nums[i];
            a.push_back(sum);


            i++;
        }

        return a;
    }
};
