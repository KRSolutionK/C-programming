#include<stdio.h>
#include<conio.h>
int main()
 {
    int i,num,f=1;

    printf("Enter a number= ");
    scanf("%d",&num);

    for (i=1;i<=num;i++) 
    {
        f*=i;
    }
    printf("Factorial of %d is: %d\n",num,f);
    getch();
    return 0;
}
