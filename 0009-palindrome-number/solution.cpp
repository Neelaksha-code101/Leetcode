
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        int num=x;

        int rev=0;

        while(num!=0){
            int digit=num%10;
            if(rev<pow(-2,31)/10 || rev>(pow(2,31)-1)/10){
                return false; 
            }
            rev=rev*10+digit;
            num/=10;
        }

        if(rev==x){
            return true;
        }
        else{
            return false;
        }
    }
};
