/*
Given a positive integer, output its complement number. 
The complement strategy is to flip the bits of its binary representation.
*/

/*
Input: 5
Output: 2

Input: 1
Output: 0
*/

class Solution {
public:
    int findComplement(int num) 
    {
        int temp = num;
        int bruh=0;
        int shift=1;
        
        while(temp>0)
        {
            bruh=(2*bruh)+1;
            temp/=2;
        }
        
        return num^bruh;
    }
};