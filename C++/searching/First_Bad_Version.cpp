// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
       long long beg=1,end=n,mid,i,j;
        while(beg<=end)
        {
            mid=(beg+end)/2;
            if(isBadVersion(mid)==true)
            {if(isBadVersion(mid-1)==true)
            {i=mid-1;
            end=mid-1;}
             else
             {i=mid;break;}
             }
            else
                beg=mid+1;
                
            }
        return i;
        }
    
    
};
