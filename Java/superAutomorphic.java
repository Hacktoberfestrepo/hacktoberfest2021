class superAutomorphic
{ 
    boolean isAutomorphic(int n)
    {
        int sq = n * n;
        int d1,d2,t=n;
        while (t > 0)
        {
            d1 = t % 10;
            d2 = sq % 10;
            if (d1 != d2)
               return false;
            t = t / 10;
            sq = sq / 10;
         }
         return true;
     }

     void main(int n)
     {
        boolean r1 = isAutomorphic(n);
        boolean r2 = isAutomorphic(n*n);
        if (r1 && r2)
           System.out.println(n + " is a super automorphic number");
        else
           System.out.println(n + " is not a super automorphic number");
      }
 }
