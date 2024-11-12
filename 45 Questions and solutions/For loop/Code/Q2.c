#include<stdio.h>
#include<conio.h>
int main() 
{
    int num,i;
    printf("Enter a number to print the multiplication table=");
    scanf("%d",&num);
    for (i=1;i<=10;i++) 
    {
        printf("%dx%d=%d\n",num,i,num*i);
    }
    getch();
    return 0;
}
