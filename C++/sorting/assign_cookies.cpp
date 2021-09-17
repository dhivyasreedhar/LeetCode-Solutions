class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int n=g.size(),m=s.size();
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());int i,j;
        for( i=0,j=0;i<m&&j<n;i++)
            if(s[i]>=g[j])
            {  j++;}
        return j;
          
    }
};
