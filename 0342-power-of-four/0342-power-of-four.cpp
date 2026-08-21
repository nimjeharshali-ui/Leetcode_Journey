class Solution {
public:
    bool isPowerOfFour(int n) {
         for(long i = 1;i<=n;i=i*4){
            if(n==i){
                return true;
            }
          
        }
          return false;
    }
};