class Solution {
public:
    bool judgeSquareSum(int c) {
        long long l = 0, r=sqrt(c);
        while(l<=r)
        {
            long long p = l*l + r*r;
            if(p<c)
                l++;
            else if(p>c)
                r--;
            else if(p == c)
                return true;

        }
        return false;
        
    }
};
