#include <stdio.h>
#include<conio.h>
int main() 
{
    int i,power=1;
    for(i=1;i<=16;i++)
    {
        power*=2;  
        printf("2^%d = %d\n",i,power);
    }
    getch();
    return 0;
}
