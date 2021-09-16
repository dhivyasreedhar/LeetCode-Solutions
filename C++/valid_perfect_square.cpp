class Solution {
public:
    bool isPerfectSquare(int num) {
        long long l=0;
        long long h=num;
        long long mid;
        while(l<=h)
        {mid=(l+h)/2;
            if(mid*mid==num)
                return true;
         if(mid*mid>num)
             h=mid-1;
         else
             l=mid+1;
        }
        
        return false;
        
    }
};
