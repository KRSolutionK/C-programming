#include<stdio.h>
#include<conio.h>
int main() 
{
    int i,n=10;
    int first=0,second=1,next;

    printf("Fibonacci series up to %d terms:\n",n);

    printf("%d%d",first,second);
    for(i=3;i<=n;i++)
     {
        next=first+second; 
        printf("%d",next);
        first=second;        
        second=next;      
    }
    printf("\n");
    getch();
    return 0;
}
