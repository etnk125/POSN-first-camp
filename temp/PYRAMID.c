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


}

