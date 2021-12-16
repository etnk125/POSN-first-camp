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

		scanf("%d %d ",&row,&way);

			char text[300]={0},TEXT[300]={0},a[300];
			int c=0;
			for(i=0;i<300;i++)
			{
				text[i]='\0';
				TEXT[i]='\0';
				a[i]='\0';
			
			}
			gets(text);
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
			//********************encode**************************
			if(way==1)
			{
					float c2=c,row2=row;
				int multi=ceil(c2/row2);
				for(i=0;i<multi;i++)
								
					{
						for(j=0;j<row&&TEXT[i+j*multi]!='\0';j++)
						{
							printf("%c",TEXT[i+j*multi]);
							//printf("*");
						}
						//printf("*");
					}
					printf("\n");
			}	
	/*			
				for(j=0;j<row;j++)
				{
					for(i=j;i<c;i+=row)
					{
						printf("%c",TEXT[i]);
					}
				}
				printf("\n");
			}*/
			//********************decode**************************
			else if(way==2)
			{
				float c2=c,row2=row;
				int line=ceil(c2/row2); 
				int b=0;
				for(i=0;i<line;i++)
			{
					for(j=i;j<c;j+=line)
					{
						a[j]=TEXT[b];
						b++;
					}
			}
			printf("%s\n",a);
	
			}
					
}
//
//				printf("%s\n",TEXT);
//				printf("%d\n",c);
//				int row_l=c%row;
//				int b=0;
//				printf("%d\n",row_l);
//				
//					for(i=0;i<row+1;i++)
//					{
//						for(j=i;j<k;j+=row)
//						{
//						a[j]=TEXT[b];
//						b++;	printf("*");
//						}
//						
//					}
//				
//				
//				for(i=k;i<row;i++)
//				{
//					for(j=i;j<c/row;j+=row)
//					{
//						a[j+k]=TEXT[b];
//						//printf(" ");
//					}
//				}
//				printf("%s\n",a);






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

