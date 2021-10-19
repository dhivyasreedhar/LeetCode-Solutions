class Solution {
public:
    string convertToTitle(int columnNumber) {
        int x=columnNumber;
        string ans="";
        while(x>0)
        {
            int t=x%26;
            if(t==0)
                t=26;
            ans=char(t+64)+ans;
            x-=t;
            x/=26;
        }
        
        return ans;
        
    }
};
