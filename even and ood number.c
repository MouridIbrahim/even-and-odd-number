#include <stdio.h>

int main() {
    int number;
   while(1) {printf("Enter the number: ");
    scanf("%d", &number);
    if (number % 2 == 0) {
        printf("This is an even number\n");
    } else {
        printf("This is an odd number\n");
    }
    printf("-------------------Exit--------------------\n");}
    return 0;
}
