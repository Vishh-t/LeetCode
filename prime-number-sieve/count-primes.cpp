class Solution {
public:
    int NoOfPrimes(int a) {
        vector<bool> isprime(a + 1, true);
        int count=0;

        for (long i = 2; i < a; i++) {
            if (isprime[i]) {
                count++;

                for (long j = i * i; j < a; j += i) {
                    isprime[j] = false;
                }
            }
        }
        return count;
    }

    int countPrimes(int n) {
        int b = NoOfPrimes(n);
        return b;
    }
};