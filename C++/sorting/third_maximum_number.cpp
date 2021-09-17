class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end(),greater<int>());
        int n=nums.size();int c=0;
        if(n<3)
            return nums[0];
       else {for(int i=1;i<n;i++)
        {if(nums[i]!=nums[i-1])
               c++;
         if(c==2)
             return nums[i];
        }
            }
             return nums[0];
        
        
    }
};
