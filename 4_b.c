#include<stdio.h>

int main() {
    int grade;
    printf("Enter the marks: ");
    scanf("%d", &grade);
    // Actual Answer
    switch (grade/10)
    {
    case 10:
    case 9:
        printf("A+");
        break;
    case 8:
        printf("A");
        break;
    case 7:
        printf("B");
        break;
    case 6:
        printf("C");
        break;
    
    default:
        printf("F");
        break;
    }
    // End of Answer

    return 0;
}