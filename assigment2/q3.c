#include <stdio.h>

int main() {
    int hours[6];
    int count_hours = 0;
    int wage_per_hour = 1000;

    for (int i = 0; i < 6; i++) {
        printf("Enter hours of employee N %d: ", i + 1);
        scanf("%d", &hours[i]);
        count_hours += hours[i];
    }
    
    for (int i = 0; i < 6; i++)
    {
        printf("\nHours for employee %d: %d", i + 1, hours[i]);
    }
    
    printf("\nTotal hours : %d\n", count_hours);
    
    
    for (int i = 0; i < 6; i++)
    {
        printf("\nWage of employee %d: %d", i + 1, hours[i] * wage_per_hour);
    }

    printf("\nTotal wages: $%d\n", count_hours * wage_per_hour);

    return 0;
}
