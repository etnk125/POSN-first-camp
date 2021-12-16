#include <stdio.h>
main(){
	int i,j;
    unsigned int m,n;
    scanf("%u%u",&m,&n);
	long int a[m][n],b[m][n];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
    	{
        scanf("%ld",&a[i][j]);
    	}
    }
	 for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
    	{
        scanf("%ld",&b[i][j]);
    	}
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
    {
        a[i][j]=a[i][j]+b[i][j];
        printf("%ld ",a[i][j]);
    }
    printf("\n");
    }
}
