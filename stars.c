#include<stdio.h>
#include<math.h>
main()
{
int n,i,j;
printf("enter number of rows\n");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
    for(j=0;j<=i;j++)
     {

       printf("*");
     }

    printf("\n");
}

}
