#include <iostream>
using namespace std;

class BitManipulation {
public:
    static long long getBit(long long n, int k) {
        return (n >> k) & 1LL;
    }

    static long long setBit(long long n, int k) {
        return n | (1LL << k);
    }

    static long long clearBit(long long n, int k) {
        return n & ~(1LL << k);
    }

    static long long toggleBit(long long n, int k) {
        return n ^ (1LL << k);
    }

    static bool isPowerOfTwo(long long n) {
        return n > 0 && (n & (n - 1)) == 0;
    }

    static int countSetBits(long long n) {
        int count = 0;

        while (n > 0) {
            n = n & (n - 1);
            count++;
        }

        return count;
    }
};

int main() {
    long long n = 10;
    int k = 1;

    cout << BitManipulation::getBit(n, k) << endl;
    cout << BitManipulation::setBit(n, k) << endl;
    cout << BitManipulation::clearBit(n, k) << endl;
    cout << BitManipulation::toggleBit(n, k) << endl;
    cout << BitManipulation::isPowerOfTwo(n) << endl;
    cout << BitManipulation::countSetBits(n) << endl;

    return 0;
}