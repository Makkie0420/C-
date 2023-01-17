// Online C compiler to run C program online

#include <stdio.h>
int main() {
    int number;
    printf("enter an integer:");
    scanf("%d" , &number);
    
    // True if the remainder is 0
    if (number%2 == 0) {
        printf("%d is an even integer.",number);
    }
    else {
        printf("%d is an odd integer.",number);
    }
    
    return 0;
}
