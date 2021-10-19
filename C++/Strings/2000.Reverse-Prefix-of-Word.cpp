class Solution {
public:
    string reversePrefix(string word, char ch) {
        
            int l=word.find(ch);
        if(l==-1)
            return word;
        for(int i=0,j=l;i<=j;i++,j--)
        {
            char t=word[i];
            word[i]=word[j];
            word[j]=t;
        }
        return word;
    }
};
