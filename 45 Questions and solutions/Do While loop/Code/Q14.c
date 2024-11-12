#include <stdio.h>
#include<conio.h>
int main()
{
    int num,i,Prime=1;  ;
    do {
        printf("Enter a number: ");
        scanf("%d",&num);
        if(num<=1)
        {
            printf("%d is not a prime number.\n",num);
        } 
        else
        {
            i=2; 
            do {
                if (num%i==0)
                 {
                    Prime=0;  
                    break;  
                }
                i++;
               } 
            while(i<=num/2);

            if(Prime)
            {
                printf("%d is a prime number.\n",num);
            } 
            else
            {
                printf("%d is not a prime number.\n",num);
            }
        }
    } 
    while (1); 
    getch();
    return 0;
}
