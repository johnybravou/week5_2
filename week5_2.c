#include<stdio.h>
int main()
{
    int a,num;
    while(a!=0)
    {
        printf("Enter num :");
        scanf("%d",&num);
        a=0;
        for(int i=2;i<=num/2;i++)
        {
            if(num%i ==0 || num==1) 
            {
                a=1;
                break;
            }
        }
    }
}