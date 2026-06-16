class Solution {
public:
    char findTheDifference(string s, string t) {

        int i=0;
        unordered_map<char,int> map;
        while(i<s.size()){
            map[s[i]]++;
            i++;
        }
        
        int j=0;
        while(j<t.size()){
            if(map[t[j]]==0){
                return t[j];


            }else{
                map[t[j]]--;
            }
            j++;
        }

        return NULL;


    }
};
