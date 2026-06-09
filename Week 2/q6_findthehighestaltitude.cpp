class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        vector<int> h;
        h.push_back(0);

        int i=0;
        while(i<n){

            h.push_back(h[i]+gain[i]);

            i++;
        }

        sort(h.rbegin(),h.rend());

        return h[0];

    }
};
