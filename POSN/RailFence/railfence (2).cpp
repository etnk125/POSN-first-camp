#include<stdio.h>
#include<math.h>

int cont(int q,int p)
{
	if(q==0||p==0) return 0;
	else return 1;
}

main()
{
	int i,k,j,l,way=1,row=1;
	while(1)
	{
		scanf("%d %d",&way,&row);
		if(way!=0)
		{
			char text[300]={0},TEXT[300]={0};
			int c=0;
			for(i=0;i<300;i++)
			{
				text[i]='\0';
				TEXT[i]='\0';
			}
			gets(text);
			//********************encode**************************
			if(way==1)
			{
				for(i=0;text[i]!='\0';i++)
				{
					if(text[i]>='A'&&text[i]<='Z')			
					{										
						TEXT[c]=text[i];					
						c++;
					}
					if(text[i]<='z'&&text[i]>='a')
					{
						text[i]-=32;
						TEXT[c]=text[i];
						c++;
					}
				}
				
				for(j=0;j<row;j++)
				{
					for(i=j;i<c;i+=row)
					{
						printf("%c",TEXT[i]);
					}
				}
				printf("\n");
		//********************decode**************************		
			}
			else if(way==2)
			{
				for(i=0;text[i]!='\0';i++)
				{
					if(text[i]>='A'&&text[i]<='Z')
					{
						TEXT[c]=text[i];
						c++;
					}
					if(text[i]<='z'&&text[i]>='a')
					{
						text[i]-=32;
						TEXT[c]=text[i];
						c++;
					}
				}
				
				float c2=c,row2=row;
				int multi=ceil(c2/row2);
				for(i=0;i<multi;i++)
				{
					for(j=0;j<row&&TEXT[i+j*multi]!='\0';j++)
					{
						printf("%c",TEXT[i+j*multi]);
//						printf("*");
					}
					//printf("*");
				}
				printf("\n");
			}
			
			
		}else break;

	}
}






//		for(i=0;text[i]!='\0';i++)
//			{
//				if(text[i]>='A'&&text[i]<='Z')
//				{
//					TEXT[c]=text[i];
//					c++;
//				}
//				if(text[i]<='a'&&text[i]>='a')
//				{
//					text[i]-=32;
//					TEXT[c]=text[i];
//					c++;
//				}
//			}
	
//	while(1)
//	{
//			scanf(" %d %d ",&way,&row);
//			if(way!=0||row!=0)
//			{
//				gets(text);printf("%s\n",text);
//			}
//			else break;
//		
//	}

