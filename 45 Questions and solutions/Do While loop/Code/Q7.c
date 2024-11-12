#include <stdio.h>
#include<conio.h>
int main() {
    int power=0;
    int result = 1;  // 2^0 is 1

    // Calculate powers of 2 up to 2^10 using a do-while loop
    do 
    {
        printf("2^%d = %d\n",power,result);
        result*=2; 
        power++;
    } 
    while(power<=10);  
    getch();
    return 0;
}
