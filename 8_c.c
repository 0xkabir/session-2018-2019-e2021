#include<stdio.h> 
int main() {
    for(; ;) {
        printf("I study in IPE.");
    }

    return 0;
}

// There is no condition inside the for loop, as a reult the program will work but will print the sentence "I study in IPE" for infinite times which requires a keyboard interrupt to stop.