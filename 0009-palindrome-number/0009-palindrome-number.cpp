class Solution {
public:
    bool isPalindrome(int x) {
         if (x < 0) return false;
        
        int value = x;
        int reversedx = 0;

        while (x > 0) {
            int digit = x % 10;

            // Check for potential overflow
            if (reversedx > (2147483647 - digit) / 10) {
                return false; // Will overflow if we proceed
            }

            reversedx = reversedx * 10 + digit;
            x /= 10;
        }

        return (reversedx == value);
    }
};