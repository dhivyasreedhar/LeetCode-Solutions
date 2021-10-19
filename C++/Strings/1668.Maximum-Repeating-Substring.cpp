class Solution {
public:
    int maxRepeating(string sequence, string word) {
        string res=word;
        int c=0;
        while(sequence.find(res)!=string::npos)
        {
            c++;
            res+=word;
        }
        return c;
        
        
    }
};
