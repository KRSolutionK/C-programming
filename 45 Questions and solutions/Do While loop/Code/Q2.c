#include<stdio.h>
#include<conio.h>
int main() 
{
    int i=1;
    do{
        printf("Square of %d: %d\n",i,i*i);
        i++;
    } while(i<=10);
    getch();
    return 0;
}
