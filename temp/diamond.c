#include <stdio.h>
main(){
    unsigned long long int n,i,j,k;
    scanf("%llu",&n);
    for(i=0;i<n;i++)
    {
        for(k=1;k<n-i;k++)
        {
             printf(" ");
        }
        for(j=i+1;j>0;j--)
        {

            printf("* ");
        }
        printf("\n");
    }
    for(i=1;i<n;i++)
    {
       for(k=1;k<i;k++)
        {
             printf(" ");
        }
        for(j=n-i;j>0;j--)
        {

            printf(" *");
        }
        printf("\n");
    }

}

/*
for(i=n-2;i>=0;i--)
    {
        for(j=i;j<n-1;j++)printf(" ");
        for(j=0;j<i+1;j++)printf("* ");
        printf("\n");
    }*/



