#include <stdio.h>

void main(){
    int number;
    int i = 1;
    printf("---------------------------------\n");
    printf("    Multipication\n");
    printf("Input number : ");
    scanf("%d", &number);
    printf("---------------------------------\n");
    for (i = 1; i <= 12; i++)
    {
        printf("%d x %d = %d\n" ,number, i , i * number);

    }
}
