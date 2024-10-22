#include <stdio.h>
#include<conio.h>
int main() {
    int a, r;
    printf("Enter a number: ");
    scanf("%d",&a);

    r = a % 7;

    if (r != 0) {
        printf("Remainder: %d\n", r);
    }
    getch();
    return 0;
}
