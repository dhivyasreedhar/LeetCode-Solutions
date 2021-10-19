class Solution {
public:
    bool checkRecord(string s) {
        int a=0,p=0,l=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='A')
                a++;
            else if(s[i]=='L'&&(i+2)<s.length())
                if(s[i+1]=='L'&&s[i+2]=='L')
                    return false;}
        if(a<2)
            return true;
        else
            return false;
        
    }
};
