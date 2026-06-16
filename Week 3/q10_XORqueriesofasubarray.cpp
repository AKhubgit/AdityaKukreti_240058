class Solution{
public:
    vector<int> xorQueries(vector<int>& arr,vector<vector<int>>& queries){
        int n=arr.size();
        vector<int> pref(n+1,0);

        int i=0;
        while(i<n){
            pref[i+1]=pref[i]^arr[i];
            i++;
        }

        vector<int> ans;
        int q=0;
        while(q<queries.size()){
            int left=queries[q][0];
            int right=queries[q][1];
            ans.push_back(pref[right+1]^pref[left]);
            q++;
        }

        return ans;
    }
};
