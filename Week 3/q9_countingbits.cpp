class Solution {
public:
    int func(int n) {
        int cnt=0;
        while(n!=0){
            if(n%2==1){
                cnt++;
            }
            n=n/2;
        }
        return cnt;
    }

    vector<int> countBits(int n) {
        vector<int> ans;
        int i=0;
        while(i<=n){
            ans.push_back(func(i));
            i++;
        }
        return ans;
    }
};
