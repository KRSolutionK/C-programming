#include<stdio.h>
#include<conio.h>
int main(){
    int a;
    printf("Enter the age \t=");
    scanf("%d",&a);
    if(a>18){
        printf("The citizen is eligible for voting.");
    }
    getch();
    return 0;
}