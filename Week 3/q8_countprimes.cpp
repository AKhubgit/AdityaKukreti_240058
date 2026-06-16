class Solution {
public:
    int countPrimes(int n){

        if(n<=2){
            return 0;
        }

        vector<bool>isPrime(n,true);
        int i=2;
        while(i*i<n){
            if(isPrime[i]){

                int j=i*i;
                while(j<n){

                    isPrime[j]=false;
                    j+=i;

                }

            }
            i++;

        }

        int count=0;
        int k=2;

        while(k<n){

            if(isPrime[k]){
                count++;

            }
            k++;

        }

        return count;

    }
};
