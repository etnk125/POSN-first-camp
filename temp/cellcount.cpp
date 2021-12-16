#include<stdio.h>
//#include<conio.h>
main()
{
	int r,c,i,j;
	char cell[101][101];
	scanf("%d %d",&r,&c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf(" %c",&cell[i][j]);
		}
	}
	int count=0;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(cell[i][j]=='#')
			{
				if(cell[i-1][j-1]=='.'||i==0||j==0)
				{
					if(cell[i][j-1]=='.'||j==0)
					{
						if(cell[i+1][j-1]=='.'||j==0||i==r-1)
						{
							if(cell[i-1][j]=='.'||i==0)
							{
								if(cell[i+1][j]=='.'||i==r-1)
								{
									if(cell[i-1][j+1]=='.'||i==0||j==c-1)
									{
										if(cell[i][j+1]=='.'||j==c-1)
										{
											if(cell[i+1][j+1]=='.'||i==r-1||j==c-1)
											{
												count++;
											}
										}
									}
								}
							}
						}
					}
				}
			}
			
		}
	}
	printf("%d",count);
}

