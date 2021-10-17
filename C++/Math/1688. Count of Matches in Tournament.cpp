class Solution {
public:
    int numberOfMatches(int n) {
        int s=0,m;
        while(n>1)
        {
            if(n%2)
            {
                m=(n-1)/2;
                n=(n-1)/2+1;
                s+=m;
            }
            else
            {
                m=n/2;
                n=n/2;
                s+=m;
            }
        }
        return s;
        
    }
};
