#include <stdio.h>
#define pa printf("+++++++++++++++++++++\n");


void main(){
    int num1, num2 , sum;
    pa
    printf("      Program Sum number\n");
    pa

    do{
        printf("Input nubmer 1 : ");
        scanf("%d" , &num1);
        printf("Input nubmer 2 : ");
        scanf("%d" , &num2);
        sum = num1 + num2;
        printf("Sum of number : %d\n", sum);
        pa


    }while( sum <=500  );
}