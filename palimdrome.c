#include<stdio.h>
int main()
{
    int n;
    int new=0;
    int temp; 
    printf("enter any number:-");
    scanf("%d",&n);
    temp=n;
    int r;
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        new=new*10+r;
    }
    
    if(new==temp)
    {
        printf("number is palimdrome /n");
    }
    else{
        printf("number is not a palimdrome");
    }
    return 0;
}