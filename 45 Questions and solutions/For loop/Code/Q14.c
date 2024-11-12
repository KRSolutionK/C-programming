#include<stdio.h>
#include<conio.h>
int main() 
{
    int i;
    for(i=2;i<=50;i++) 
    {
        int prime=1;
        
        for(int j=2;j*j<=i;j++) 
        {
            if(i%j==0) 
            {
                prime=0; 
                break;  
            }
        }
        if(prime==1)
        {
            printf("%d is Prime\n",i);
        } else 
        {
            printf("%d is Composite\n",i);
        }
    }
    getch();
    return 0;
}
