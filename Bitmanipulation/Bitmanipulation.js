class BitManipulation {
    static getBit(n, k) {
        return (n >> k) & 1;
    }

    static setBit(n, k) {
        return n | (1 << k);
    }

    static clearBit(n, k) {
        return n & ~(1 << k);
    }

    static toggleBit(n, k) {
        return n ^ (1 << k);
    }

    static isPowerOfTwo(n) {
        return n > 0 && (n & (n - 1)) === 0;
    }

    static countSetBits(n) {
        let count = 0;

        while (n > 0) {
            n = n & (n - 1);
            count++;
        }

        return count;
    }
}

// Example usage
let n = 10;
let k = 1;

console.log(BitManipulation.getBit(n, k));
console.log(BitManipulation.setBit(n, k));
console.log(BitManipulation.clearBit(n, k));
console.log(BitManipulation.toggleBit(n, k));
console.log(BitManipulation.isPowerOfTwo(n));
console.log(BitManipulation.countSetBits(n));