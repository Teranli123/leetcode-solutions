#include <iostream> 
#include <climits>
//solution to leecode 191, count # of bits that are 1.

int hammingWeight(int n) {
    if (n >= INT_MAX || n <= 0){ 
        return 0;
    }
    int count{0};
    for (int i{0}; i < 32; i++) {
        if (n & (1 << i)) {
            count++;
        }
    }
    return count;
}

/*
int main ();

int main()  {
    return 0;
}
*/