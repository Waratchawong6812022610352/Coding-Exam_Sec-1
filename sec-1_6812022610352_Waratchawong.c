#include <stdio.h>

int main() {
    int level;
    float number1;
    float number3;
    int incomelevel;

    printf("Enter Number of OT days (1-10): ");
    scanf("%d", &level);

    printf("Enter OT hours for day1: ");
    scanf("%d", &number1);

    printf("Enter OT hours for day3: ");
    scanf("%d", &number3);

     printf("Enter purchase amount (L,M,H): ");
    scanf("%d", &incomelevel);

    printf("\nEnter Number of OT day = %d\n", level);
    printf("Enter OT hours for day1 = %d\n", number1);
    printf("Enter OT hours for day3 = %d\n",number3);

    return 0;
}
