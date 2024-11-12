#include <stdio.h>
#include<conio.h>
int main() {
    int first = 0, second = 1, next, i = 1;

   
    printf("%d\n",first);
    printf("%d\n",second);

    do {
        next=first+second;
        printf("%d\n",next);
    
        first=second;
        second=next;
        i++;
    }
    while(i<10);  
    getch();
    return 0;
}
