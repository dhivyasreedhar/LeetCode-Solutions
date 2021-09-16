class Solution {
public:
    int arrangeCoins(int n) {
        long long l=0,h=n,m,tot;
        while(l<=h)
        {m=(l+h)/2;
         tot=(m*(m+1))/2;
         if(tot==n)
             return m;
         if(tot>n)
             h=m-1;
         else
             l=m+1;
            
        }
        
     return h;   
    }
};
