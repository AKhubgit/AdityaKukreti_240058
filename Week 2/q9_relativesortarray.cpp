class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int count[1001] = {0};
        
        int i=0;
        while (i<arr1.size()) {
            count[arr1[i]]++;
            i++;
        }
        
        vector<int> ans;
        
        
        int j=0;
        while(j<arr2.size()){
            int curr=arr2[j];
            
            while(count[curr]>0){
                ans.push_back(curr);
                count[curr]--;
            }
            j++;
        }
        
        
        int k=0;
        while(k<=1000){
            
            while(count[k]>0){
                ans.push_back(k);
                count[k]--;
            }
            k++;
        }
        
        return ans;
    }
};
