class Solution {
public:
    int addDigits(int num) {
        while(num>=10){
            num = sumDigit(num);
        }
        return num;
    }

    int sumDigit(int num){
        int sum =0;
        while(num>0){
            int digit = num%10;
            num = num/10;
            sum = sum + digit;
        }
        return sum;
    }
};