class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        int curr=0;
        
        
        int i=0;
        while(i<k){
            curr+=nums[i];
            i++;
        }
        
        int sum=curr;
        
        
        while(i<n){
            
            curr+=nums[i]-nums[i-k];
            if(curr>sum){
                sum=curr;
            }
            
            i++;
        }
        
        return static_cast<double>(sum)/k;
    }
};
