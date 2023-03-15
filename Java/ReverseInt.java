class ReverseInt {
    public int reverse(int x) {
        // checking sign
        boolean positive = true;
        if(x<0){
            positive = false;
            x=Math.abs(x);
        }
        long rev =0;
        while(x>0){
            rev = rev*10 +x%10;
            x=x/10;
        }
        
        // if answer is greaterv than integer max value return 0
            if(rev>Integer.MAX_VALUE || rev<Integer.MIN_VALUE)
                return 0;
        // now checking sign and retuning answer based on that
        if(positive)
            return (int)rev;
        else
            return (int)-rev;
        
    }
}
