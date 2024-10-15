#include<stdio.h>
 
int main()
{
    int n,temp,r;
    int new=0;
    printf("Enter any number:-");
    scanf("%d",&n);
    temp=n;

    while(n!=0)
    {
        r=n%10;
        n=n/10;
        new=new+r*r*r;
    }
     if(new==temp)
     {
        printf("\n Number is armstrong");
     }
     else{
        printf("\n *** Number is not an armstrong ***");
     }
    return 0;
} 