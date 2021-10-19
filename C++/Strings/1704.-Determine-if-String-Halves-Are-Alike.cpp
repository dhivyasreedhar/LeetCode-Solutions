class Solution {
public:
    bool halvesAreAlike(string s) {
        int n=s.length();
        n=n/2;
        int x=0,y=0;
        for(int i=0;i<n;i++)
{if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
                x++;}
        for(int i=n;i<2*n;i++)
{if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
    y++;
            
        }
        if(x==y)
            return true;
        else
            return false;
        
        
    }
};
