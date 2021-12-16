#include<stdio.h>
main()
{
	int j,i=0,c=0,n,m,m_m=0,count=1;
	scanf("%d%d",&n,&m);
	int a[n];

		for(i=0;i<n;i++)
		{
			
			scanf("%d",&a[i]);
				
					m_m+=a[i];
				 if(m_m>m)
				{
					m_m=a[i];
					count++;
				}
				
			
			
		}
		
		
	
	
	printf("%d",count);
}
