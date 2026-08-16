class Solution {
public:

    int sumSquare(int n){
        int sum = 0;
        while(n>0){
            int digit = n%10;
            n = n/10;
            sum = sum+digit*digit;
        }
        return sum;
    }
    bool isHappy(int n){
        while(n!=1 && n!=4){
            n = sumSquare(n);
        }
        return n == 1;
    }

};