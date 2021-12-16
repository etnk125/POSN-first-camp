#include<stdio.h>
//#include<conio.h>
main()
{
	int r,c,i,j,count=0;
	int cell[101][101];
	scanf("%d %d",&r,&c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&cell[i][j]);
		}
	}
	for(i=0;i<r-3;i++)
	{
		for(j=0;j<c;j++)
		{
			if(cell[i][j]==cell[i][j-1]&&j>=3)//******** y *******
			{
				if(cell[i][j]==cell[i][j-2])
				{
					if(cell[i][j]==cell[i][j-3])
					{
						count++;break;
					}
				}
			}
			if(cell[i][j]==cell[i+1][j]&&i<c-3)//******* x *********
			{
				if(cell[i][j]==cell[i+2][j])
				{
					if(cell[i][j]==cell[i+3][j])
					{
						count++;break;
					}
				}
			}
			if(cell[i][j]==cell[i+1][j-1])//******* + + ******
			{
				if(cell[i][j]==cell[i+2][j-2])
				{
					if(cell[i][j]==cell[i+3][j-3])
					{
						count++;break;
					}
				}
			}
			if(cell[i][j]==cell[i+1][j+1]&&j<c-3&&i<c-3)//******* + - ******
			{
				if(cell[i][j]==cell[i+2][j+2])
				{
					if(cell[i][j]==cell[i+3][j+3])
					{
						count++;break;
					}
				}
			}
			if(cell[i][j]==cell[i-1][j-1]&&j>=3&&i<c-3)//******* - - ******
			{
				if(cell[i][j]==cell[i-2][j-2])
				{
					if(cell[i][j]==cell[i-3][j-3])
					{
						count++;break;
					}
				}
			}
			if(cell[i][j]==cell[i-1][j-1])//******* - + ******
			{
				if(cell[i][j]==cell[i-2][j-2])
				{
					if(cell[i][j]==cell[i-3][j-3])
					{
						count++;break;
					}
				}
			}
		
		}
	}
	if(count>0)printf("TRUE");
	else printf("FALSE");
}

