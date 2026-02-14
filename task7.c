#include <stdio.h>

int main() {
    float amount, discount, finalAmount;


    printf("Enter total purchase amount: ");
    scanf("%f", &amount);

    
    if (amount >= 5000) {
        discount = amount * 0.20;
        printf("20%% discount applied\n");
    }
    else if (amount >= 3000) {
        discount = amount * 0.10;
        printf("10%% discount applied\n");
    }
    else {
        discount = 0;
        printf("No discount applied\n");
    }


    finalAmount = amount - discount;

    printf("Discount: %.2f\n", discount);
    printf("Final Amount to Pay: %.2f\n", finalAmount);

    return 0;
}
