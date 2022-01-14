#include<stdio.h>
int main()
{
    int num,r,i,temp,sum=0;
    scanf("%d",&num);
    temp=num;
    for(i=1;i<num;i++){
        if(num%i==0){
            sum=sum+i;
        }
        
    }if(sum==temp){
        printf("True");
    }else {
        printf("False");
    }
}