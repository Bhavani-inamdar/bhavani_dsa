//to check if triangle is valid or invalid
#include<stdio.h>
main()
{
    int a,b,c;
    printf("Enter 3 sides of triangle\n");
    scanf("%d%d%d",&a,&b,&c);
    if ((a+b>c)&&(a+c>b)&&(b+c>a))
        printf("Triangle is valid");
    else
        printf("Triangle is invalid");

}
