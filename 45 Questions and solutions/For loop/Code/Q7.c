#include<stdio.h>
#include<conio.h>
int main() 
{
    int num,reversed=0,remainder;
    printf("Enter a number= ");
    scanf("%d",&num);

    for (num;num!=0;num/=10)
     {
        remainder=num%10;     
        reversed=reversed*10+remainder;  
    }
    
    printf("Reversed number= %d\n",reversed);
    getch();
    return 0;
}
