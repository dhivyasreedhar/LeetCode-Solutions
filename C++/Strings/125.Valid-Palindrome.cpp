class Solution {
public:
    bool isPalindrome(string s) {
        string a;
        for(int i=0;i<s.length();i++)
        {
            if(isalpha(s[i]))
                a.push_back(tolower(s[i]));
            if(isdigit(s[i]))
                a.push_back(s[i]);
        }
        for(int i=0,j=a.length()-1;i<=j;i++,j--)
            if(a[j]!=a[i])
                return false;
        
        return true;}
};
