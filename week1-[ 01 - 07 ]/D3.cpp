/*
Given an arbitrary ransom note string and another string containing letters from all the magazines, 
    write a function that will return true if the ransom note can be constructed from the magazines ; 
    otherwise, it will return false.
Each letter in the magazine string can only be used once in your ransom note.
Note:
You may assume that both strings contain only lowercase letters.
*/

/*
canConstruct("a", "b") -> false
canConstruct("aa", "ab") -> false
canConstruct("aa", "aab") -> true
*/

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