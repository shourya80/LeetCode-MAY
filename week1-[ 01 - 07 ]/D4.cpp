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