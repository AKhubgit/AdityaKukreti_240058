class Solution {
public:
    bool isPalindrome(int x) {
        int a=x;
    
        int i=0;
        long b=0;
        while(x!=0){
            i=x%10;
            x=x/10;
            b=10*b+i;
        }
        if(b!=a || a<0){
            return false;
        }else{
            return true;
        }
    }
};
