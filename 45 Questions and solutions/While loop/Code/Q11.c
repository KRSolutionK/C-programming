#include <stdio.h>
#include<conio.h>
int main() {
    int a=1; 
    
    while (a<=10)
    { 
        if (a%2==0)
         { 
            printf("%d is Even\n",a);
        } 
        else 
        {
            printf("%d is Odd\n",a);
        }
    a++;
    }
    getch();
    return 0;
}
