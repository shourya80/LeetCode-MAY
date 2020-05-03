// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) 
    {
              
        long long mid = n/2;
        long long l=1;
        long long r=n;
        
        vector<long long> check;
        
        while(l<=r)
        {
            if(isBadVersion(mid))
            {
                r=mid-1;
                check.push_back(mid);
                                
            }
            else
            {
                l=mid+1;
            }
            mid=(l+r)/2;
        }
        
        sort(check.begin(),check.end());
        
        return check[0];
    }
};