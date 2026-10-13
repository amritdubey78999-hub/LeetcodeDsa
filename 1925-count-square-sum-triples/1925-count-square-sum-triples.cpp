class Solution {
public:
    int countTriples(int n) {
        int count = 0;
        for (int a = 1; a <= n; a++) {
            for (int b = 1; b <= n; b++) {
                int totalSquareSum = (a * a) + (b * b); 
                int c = sqrt(totalSquareSum);        
                if (c <= n && c * c == totalSquareSum) {
                    count++;
                }
            }
        }
        return count;
    }
};
