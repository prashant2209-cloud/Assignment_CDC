class Solution {
public:
    int maxProduct(int n) {
        int lar = 0;
        int seclar = 0;

        while (n > 0) {
            int digit = n % 10;
            n /= 10;

            if (digit >= lar) {
                seclar = lar;
                lar = digit;
            }
            else if (digit > seclar) {
                seclar = digit;
            }
        }

        return lar * seclar;
    }
};