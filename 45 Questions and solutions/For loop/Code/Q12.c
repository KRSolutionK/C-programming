#include<stdio.h>
#include<conio.h>
int main()
 {
    int i,marks;  
    char grade; 
    
    for (i=1;i<=5;i++) 
    {
        printf("Enter marks for student %d:",i);
        scanf("%d",&marks);

        if(marks>=90) 
        {
            grade='A';
        } 
        else if(marks>=75)
        {
            grade='B'; 
        }
         else if(marks>=50)
        {
            grade='C'; 
        }
         else if(marks>=35)
        {
            grade='D'; 
        }
         else
        {
            grade='F';
        }
        
        printf("Student %d's grade: %c\n", i, grade);
    }
    getch();
    return 0;
}
