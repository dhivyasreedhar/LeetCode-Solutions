class Solution {
public:
    bool judgeCircle(string moves) {
        int l=0,r=0,u=0,d=0;
        for(int i=0;i<moves.size();i++)
        {
            if(moves[i]=='L')
                l++;
            if(moves[i]=='R')
                r++;
            if(moves[i]=='U')
                u++;
            if(moves[i]=='D')
                d++;
        }
        if(u==d&&r==l)
            return true;
        
        return false;
        
    }
};
