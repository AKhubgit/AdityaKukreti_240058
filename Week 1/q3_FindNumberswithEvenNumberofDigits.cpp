class Solution {
public:

    int digits(int a){
        int ans=0;
        
        while(a!=0){
            a=a/10;
            ans++;
        }

        return ans;

    }

    int findNumbers(vector<int>& nums) {
        int i=0;
        int ans=0;
        while(i<nums.size()){

            if(digits(nums[i])%2==0){
                ans++;
            }

            i++;
        }
        return ans;
    }
};
