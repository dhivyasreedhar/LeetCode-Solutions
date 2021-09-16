/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int i,j;
        long long beg=1,end=n,mid;
        while(beg<=end)
        {mid=(beg+end)/2;
            if(guess(mid)==0)
                return mid;
         
         if(guess(mid)==-1)
             end=mid-1;
         else
             beg=mid+1;
        }
        
        return 0;
    }
};
