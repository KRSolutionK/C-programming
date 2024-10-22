#include<stdio.h>
#include<conio.h>
int main(){
    int a;
    printf("Enter a number=");
    scanf("%d",&a);
     if (a % 7 != 0) {
        printf("The input number is %d",a);
    }
    getch();
    return 0;
}