class Solution {
public:
    bool loop(string s,int l,int h)
    {while(l<h)
    {if(s[l]==s[h])
        {
            l++;h--;
        }
        else
            return false;
    }
    
    return true;}
    
    bool validPalindrome(string s) {
        int l=0,h=s.size()-1;
        while(l<h)
        {
            if(s[l]==s[h])
            {
                l++;h--;
            }
            else
                return (loop(s,l,h-1)||loop(s,l+1,h));
        }
        
        return true;
        
    }
};
