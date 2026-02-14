#include <stdio.h>

int main() {
    char u1, u2, u3, u4;
    int password;

    
    printf("Enter username (4 letters): ");
    scanf(" %c%c%c%c", &u1, &u2, &u3, &u4);

    
    printf("Enter password: ");
    scanf("%d", &password);


    if (u1 == 'u' && u2 == 's' && u3 == 'e' && u4 == 'r' && password == 7890) {
        printf("Connected Successfully");
    } else {
        printf("Connection Failed");
    }

    return 0;
}
