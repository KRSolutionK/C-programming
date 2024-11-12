#include <stdio.h>
#include<conio.h>
int main() {
    int a;

    printf("Enter a number (enter 0 to stop): ");
    scanf("%d", &a);

    while(a!=0)
     {
        if(a>0) 
        {
            printf("%d is Positive\n",a);
        }
         else
        {
            printf("%d is Negative\n",a);
        }

        printf("Enter a number (enter 0 to stop): ");
        scanf("%d",&a);
    }
    printf("You entered 0. Exiting the program.\n");
    getch();
    return 0;
}
