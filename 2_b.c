#include<stdio.h>
int main() {
    int seconds, minutes=0, hours=0;
    printf("Enter the seconds: ");
    scanf("%d", &seconds);
    while(seconds>=60) {
        minutes = seconds/60;
        seconds %= 60;
        while(minutes>=60) {
            hours = minutes/60;
            minutes %= 60;
        }
    }

    printf("Hours: %d \nMinutes: %d \nSeconds: %d", hours, minutes, seconds);
    return 0;
}