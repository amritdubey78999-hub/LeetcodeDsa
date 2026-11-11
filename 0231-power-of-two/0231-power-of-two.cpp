class Solution {
public:
    bool isPowerOfTwo(int n) {
        // Negative numbers aur 0 kabhi bhi power of two nahi ho sakte
        if (n <= 0) {
            return false;
        }
        
        // Agar (n & (n - 1)) zero aaya, toh matlab n power of two hai
        return (n & (n - 1)) == 0;
    }
};
