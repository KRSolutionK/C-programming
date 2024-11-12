#include<stdio.h>
#include<conio.h>
int main() 
{
    int i;
    printf("Numbers divisible by 3 between 1 and 50 are:\n");
    for(i=1;i<=50;i++) 
    {
        if (i%3==0) 
        {  
            printf("%d\n",i); 
         }
    }
    
    getch();
    return 0;
}
