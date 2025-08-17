long sumXor(long n) {
    long result = 0;
    while(n) {
        if(!(n & 0x1)) {
            result++;
        }
        n = n>>0x1;
    }
    return 0x1ULL << (result);

}
