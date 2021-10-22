class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n=nums.size();
        vector<int> sum(n);
        int sum1=0;
        for(int i=0;i<nums.size();i++)
        {sum1+=nums[i];
        sum[i]=sum1;}
        
        return sum;
        
    }
};
