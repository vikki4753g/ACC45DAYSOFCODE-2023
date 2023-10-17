class Solution {
public:
    bool power(int n){
        if(n==1){
            return true;
        }
        if(n<=0||n%2!=0){
            return false;
        }
        return power(n/2);
    } 
    bool isPowerOfTwo(int n) {
        return power(n);
    }
};
