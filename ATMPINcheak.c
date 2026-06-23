// Name-Sagar Ravindra Dalvi
//PRN- 2503033111372L007#include <stdio.h>

int main() {
    int pin;

    printf("Enter ATM PIN: ");
    scanf("%d", &pin);

    if (pin == 1234) {
        printf("PIN is Correct. Access Granted.\n");
    } else {
        printf("Incorrect PIN. Access Denied.\n");
    }

    return 0;
}
