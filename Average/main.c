#include <stdio.h>
#include <stdlib.h>

int main()
{
     int n, i;
    float num[100], sum = 0.0, avg;
    printf("Welcome to my program, here a student can calculate his or her average.\n");

    printf("Enter the numbers of subjects: ");
    scanf("%d", &n);

    while (n > 100 || n < 1) {
        printf("Error! subject should in range of (1 to 100).\n");
        printf("Enter the another subject again: ");
        scanf("%d", &n);
    }

    for (i = 0; i < n; ++i) {
        printf("%d. Enter number: ", i + 1);
        scanf("%f", &num[i]);
        sum += num[i];
    }

    avg = sum / n;
    printf("Average = %.2f", avg);
    return 0;
}
