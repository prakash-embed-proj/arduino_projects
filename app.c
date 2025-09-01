#include<stdio.h>
#include"sum.h"
int main()
{
int in1,in2,res;
printf("enter in1,in2");
scanf("%d%d",&in1,&in2);
res=sum(in1,in2);
printf("sum=%d",res);
return 0;
}

