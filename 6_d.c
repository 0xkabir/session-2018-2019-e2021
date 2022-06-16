#include<stdio.h>

int main() {
    int m = -10, n = 20;
    n = (m<20)? 0:1;
    printf("%d %d", m, n);

    return 0;
}

// In the main function, while assigning the value of n, the value of m is checked whether it is less than 20. If the condtion is true, the value of n is assigned to 0 and the value of n is assinged to 1 if the condition is false. Since the condtion is true, the value of n will be 0 and the value of m will be -10.