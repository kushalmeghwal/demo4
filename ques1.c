//addition
#include<stdio.h>
int main()
{
    int a,b,sum,sub,mul,div;
    int c;
    printf("enter two numbers\n");
    scanf("%d %d",&a,&b);
    sum=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;
    printf("enter choice\n ");
    scanf("%d",&c);
    switch(c) {
    case 1: printf("mul = %d\n",mul);
             break;
    case 2: printf("div = %d\n",div);
             break;
    return 0;
    }
}