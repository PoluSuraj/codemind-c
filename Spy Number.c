#include<stdio.h>
int main()
{
    int num,sum=0,f=1,r,same,temp;
    scanf("%d",&num);
    same=num;
    while(num>0)
    {
        r=num%10;
        sum=sum+r;
        temp=f*r;
        f=temp;
        num=num/10;
    }
    if(sum==temp)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
    return 0;
}