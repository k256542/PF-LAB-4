#include <stdio.h>

int main() {
    int m1, m2, m3, m4, m5;
    float total, percentage;


    printf("Enter marks of 5 subjects (0 - 100):\n");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);

    
    total = m1 + m2 + m3 + m4 + m5;
    percentage = (total / 500) * 100;


    if (percentage >= 85) {
        printf("Percentage: %.2f%%\n", percentage);
        printf("Full Scholarship\n");
    }
    else if (percentage >= 70) {
        printf("Percentage: %.2f%%\n", percentage);
        printf("Partial Scholarship\n");
    }
    else if (percentage >= 50) {
        printf("Percentage: %.2f%%\n", percentage);
        printf("Eligible for Consideration\n");
    }
    else {
        printf("Percentage: %.2f%%\n", percentage);
        printf("Not Eligible\n");
    }

    return 0;
}
