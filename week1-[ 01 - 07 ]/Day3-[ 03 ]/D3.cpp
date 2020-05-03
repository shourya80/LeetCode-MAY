class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) 
    {
        int pos=0;
        int index;
        
        int m = ransomNote.length();
        int n = magazine.length();
        
        bool flag=true;
        int count=0;
        
        unordered_map<char,int> ma;
        
        for(auto i=0;i<n;i++)
        {
            ma[magazine[i]]++;            
        }
        
        for(auto i=0;i<m;i++)
        {
            if(ma[ransomNote[i]])
            {
                ma[ransomNote[i]]--;
                count++;
            }
            else
            {
                flag=false;
                break;
            }
        }
        
        return flag;
    }
};