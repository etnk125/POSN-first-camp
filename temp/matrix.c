#include <stdio.h>

main(){
	int i;
    unsigned int m,n;
    scanf("%u%u",&m,&n);
	long int a[m*n],b[m*n];

    for(i=0;i<=m*n;i++)
    {
        scanf("%ld",&a[i]);
    }
    for(i=0;i<=m*n;i++)
    {
        scanf("%ld",&b[i]);
    }
    for(i=0;i<m;i++)
    {
        for(int j=0;i<n;i++)
    {
        a[i]=a[i]+b[i];
        printf("%ld ",a[i])
    }
    }



}
