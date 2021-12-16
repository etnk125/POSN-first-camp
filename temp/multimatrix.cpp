#include <stdio.h>
//#include <conio.h>
//#include<math.h>
main(){
	int m,n,i,j,p,q;
    scanf("%d %d",&m,&p);
    int a[20][20];
    for(i=0;i<m;i++)
    {
    	for(j=0;j<p;j++)
    	{
    		scanf("%d",&a[i][j]);			
		}
	}
	scanf("%d %d",&q,&n);
	int b[20][20],c[20][20];
    for(i=0;i<q;i++)
    {
    	for(j=0;j<n;j++)
    	{
    		scanf("%d",&b[i][j]);
		}
	}
	//printf("*\n");
	//***********transpast+=*********
//	for(i=0;i<n;i++)
//    {
//    	for(j=0;j<q;j++)
//    	{
//    		
//    		printf("%d ",b[i][j]);
//		}
//		printf("\n");
//	}

	int sum = 0,k;
    for(i=0;i<m;i++)
    {
        for(k=0;k<n;k++)
        {
            sum = 0;
            for(j=0;j<p;j++)
            {
                sum += a[i][j] * b[j][k];
            }
            printf("%d ",sum);
        }
        printf("\n");
    }


	
}

//	for(i=0;i<m;i++)
//    {
//    	for(j=0;j<n;j++)
//    	{
//    		for()
//    		{
//    			for()
//			}
//			
//			
//			
//			c[i][j]=a[i][j]*b[i][j];
//		}
//	}



//printf("%d\n",);
//printf("%f\n",);
//printf("%c\n",);
//scanf("%",&)

