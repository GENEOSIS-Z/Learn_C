#include <stdio.h>

int main()
{
    //Q4. Explain step by step evaluation of 3*x/y-z+r where
    // By bodmas rule
    // 3*2/3-3+1
    // 3*6.6-3+1
    // 19.8-3+1
    // 20.8-3
    // 17.8
    // By operator precedence and associativity
    // i. 3*x/y-z+r
    // (3*2/3)-3+1
    // 6/3-3+1
    // 2-3+1
    // 0
    // Verifying
    int x = 2, y = 3, z = 3, r = 1;
    printf("the value of 3*x/y-z+r is %d \n", 3 * x / y - z + r);
    return 0;
}