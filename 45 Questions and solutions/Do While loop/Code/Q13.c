#include<stdio.h>
#include<conio.h>
int main() {
    int marks;
    do {
        printf("Enter a your marks: ");
        scanf("%d", &marks);
        if(marks>50)
        {
            printf("Pass\n");
        } 
        else 
        {
            printf("Fail\n");
        }
    } 
    while(1);  
    getch();
    return 0;
}
