#include <stdio.h>
#include<conio.h>
int main() {
    int base, exponent, result=1, count=0;

    printf("Enter the base: ");
    scanf("%d",&base);
    printf("Enter the exponent: ");
    scanf("%d",&exponent);

    if(exponent<0)
     {
        printf("Negative exponent not supported in this implementation.\n");
        return 1;
    }
    while(count<exponent) 
    {
        result*=base; 
        count++;        
    }
    printf("%d^%d=%d\n",base,exponent,result);
    getch();
    return 0;
}
