class Solution {
public:
    bool isPalindrome(int x) {
        int temp = x;
        int rev=0;
        int digit;
        if(x<0){
            return 0;
        }
        
        while(x!=0){
            digit = x%10;
            x = x/10;
            if(rev>INT_MAX/10 || (rev == INT_MAX/10 && digit>7)){
            return false;
        }
            rev=rev*10+digit;
            }
            if(rev==temp){
                return true;
            }
            else {
                return false;
            }
        }

    };
