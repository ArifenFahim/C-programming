#include<stdio.h>
int main()
{
    int num,count=0;
    printf("Enter any number: ");
    scanf("%d",&num);

    while (num!=0)
    {
       num=num/10;
       ++count;
    }
    printf("total number  of digits: %d\n",count);

    return 0;
}

