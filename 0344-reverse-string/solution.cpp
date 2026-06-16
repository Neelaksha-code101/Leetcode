class Solution {
public:
    void reverseString(vector<char>& s) {
        if(s.size()<1 || s.size()>5*pow(10,4)){
            cout<<"impossible to operate";
        }

        for(int i=0;i<s.size()/2;i++){
            int temp=s[i];
            s[i]=s[s.size()-i-1];
            s[s.size()-i-1]=temp;
        }
    }
};
