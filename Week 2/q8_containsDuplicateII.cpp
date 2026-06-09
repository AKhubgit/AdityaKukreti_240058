class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        int n=nums.size();

        int i=0;
        while(i<n){
            if(m.find(nums[i])!=m.end()){
                if(i-m[nums[i]]<=k){
                    return true;
                }
            }
            m[nums[i]]=i;
            i++;
        }
        
    
        
        return false;
    }
};
