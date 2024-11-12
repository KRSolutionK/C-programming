#include <stdio.h>
#include<conio.h>
int main() 
{
    int score;
    printf("Enter the student's score (negative score to stop): ");
    scanf("%d",&score);
    while(score>=0)
    {
        if(score>=40)
        {
            printf("Pass\n");
        }
         else 
        {
            printf("Fail\n");
        }
        printf("Enter the student's score (negative score to stop): ");
        scanf("%d", &score);
    }
    printf("Negative score entered. Exiting the program.\n");
    getch();
    return 0;
}
