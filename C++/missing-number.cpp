class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int k=0;
            
        for(int i=0;i<=n-1;i++)
        {  if(nums[i]!=i)
                return i;
         }
        
        
        return n;
        
    }
};
