class Solution {
public:
    int arrangeCoins(int n) {
        return sqrt((double)(2*(long)n + 0.25)) - 0.5;
        /*
        1+2+3+...+x = n
    -> (1+x)x/2 = n
    -> x^2+x = 2n
    -> x^2+x+1/4 = 2n +1/4
    -> (x+1/2)^2 = 2n +1/4
    -> (x+0.5) = sqrt(2n+0.25)
    -> x = -0.5 + sqrt(2n+0.25)
        
        */
    }
};