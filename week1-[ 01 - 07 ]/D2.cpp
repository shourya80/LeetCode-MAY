/*
You're given strings J representing the types of stones that are jewels, 
    and S representing the stones you have.  
Each character in S is a type of stone you have.  
You want to know how many of the stones you have are also jewels.
The letters in J are guaranteed distinct, and all characters in J and S are letters. 
Letters are case sensitive, so "a" is considered a different type of stone from "A".
*/

/*
Input: J = "aA", S = "aAAbbbb"
Output: 3

Input: J = "z", S = "ZZ"
Output: 0
*/

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