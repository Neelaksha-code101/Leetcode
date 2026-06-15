
class Solution {
public:
    int reverse(int x) {
        int num=x;
        int rev=0;

        while(x!=0){
            int digit=x%10;
            x/=10;

            if(rev<pow(-2,31)/10 || rev>(pow(2,31)-1)/10){
            return 0;
            }
            rev=rev*10+digit;
        }

        return rev;
    }

    int main(){
        cout<< reverse(-123);
        return 0;
    }
};
