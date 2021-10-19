class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string res;
        int n=word1.size(),m=word2.size(),i=0,j=0;
        while(i<n&&i<m)
        {
            if(i<n)
                res+=word1[i];
            if(i<m)
                res+=word2[i];
            i++;
        }
      if(i<n) res.append(word1.substr(i,n-i));
        if(i<m) res.append(word2.substr(i,m-i));
        
        return res;
        
    }
};
