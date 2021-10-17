class Solution {
public:
    int numberOfSteps(int num) {
        int s=0;
        while(num)
        {
            if(num%2)
            {num-=1;s++;}
            else
            {
                num/=2;
                s++;
            }
        }
        return s;
        
    }
};
