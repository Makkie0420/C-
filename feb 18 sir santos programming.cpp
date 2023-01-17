#include<stdio.h>

int main(){
    int a, sum=0;

    printf("Enter Two numbers: \n");

    for (int i=0; i<2; i++)
    {
        scanf ("%d",&a);
        sum = sum + a;
    }

    printf("\nsum = %d" , sum);

    if(sum > 30)
    {
        printf("\nWelcome");
    }

    return 0;
}

