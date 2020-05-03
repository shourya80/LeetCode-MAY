class Solution {
public:
    int numJewelsInStones(string J, string S) 
    {
        unordered_map<char,int> ma;
        
        long long n = J.length();
        long long m = S.length();
        
        for(auto i=0;i<n;i++)
        {
            ma[J[i]]++;
        }
        
        long long count=0;
        
        for(auto i=0;i<m;i++)
        {
            if(ma[S[i]])
            {
                count++;
            }
        }
        
        return count;
        
    }
};