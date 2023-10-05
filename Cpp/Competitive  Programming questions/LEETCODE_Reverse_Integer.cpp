class Solution {
public:
    int reverse(int x) {
        int flag=0;
        long int ans=0;
        if(x<0){
            flag=1;
            x=abs(x);
        }
        while(x>0){
            ans=(ans*10)+(x%10);
            x/=10;
        }
        if(ans>INT_MAX)
        return 0;

        if(flag==1){
            return ans*(-1);
        }
        return ans;
    }
};
