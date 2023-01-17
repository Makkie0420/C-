#include <stdio.h>

int main(void) {

int sum=0,i,n;

printf("enter the five no.'s one by one\n");;

for(i=1;i<=5;i++){

scanf("%d",&n);

sum=sum+n;

}

printf("sum is =%d\n average is =%d ",sum,(sum/5));

return 0;

}
