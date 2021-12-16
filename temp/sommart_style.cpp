#include<stdio.h>
#include<math.h>/////////////////sommart style////////////////////////////
main()
{
	int i,k,j,l,way=0,row=0;
		scanf("%d ",&way);

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
				if(c%2==0)
				{
					int b=0;
						a[b]=TEXT[c/2-1];b++;
						for(i=1;i<=c/2;i++)
					{
						
						a[b]=TEXT[c/2-1+i];
					//	printf("%c %d\n",a[b],c/2-1+i);
						b++;
						a[b]=TEXT[c/2-1-i];
						//printf("%c %d\n",a[b],c/2-1-i);
						b++;	
					}
				}else 
				{
					int b=0;
						a[b]=TEXT[c/2];b++;
						for(i=1;i<=c/2;i++)
					{
						
						a[b]=TEXT[c/2-i];
						//printf("%c %d\n",a[b],c/2+i);
						b++;
						a[b]=TEXT[c/2+i];
						//printf("%c %d\n",a[b],c/2-i);
						b++;	
				}
						
			}
				
				
			
			printf("%s\n",a);
	
			
			}
			//********************decode**************************
			else if(way==2)
			{
				int e=0;
			//	printf("%s\n",TEXT);
			
				if((c/2)%2!=0)
				{
					int b=0;
				a[c/2-1]=TEXT[b];b++;
				for(i=1;i<=c/2;i++)
			{
				
				a[c/2-1+i]=TEXT[b];
			//	printf("%c %d\n",a[c/2-1-i+1],c/2-1-i+1);
				b++;
				a[c/2-1-i]=TEXT[b];
				//printf("%c %d\n",a[c/2-1+i+1],c/2-1+i+1);
				b++;	
			}
				}else
				{
					int b=0;
				a[c/2-1+1]=TEXT[b];b++;
				for(i=1;i<=c/2;i++)
			{
				
				a[c/2-1-i+1]=TEXT[b];
			//	printf("%c %d\n",a[c/2-1-i+1],c/2-1-i+1);
				b++;
				a[c/2-1+i+1]=TEXT[b];
				//printf("%c %d\n",a[c/2-1+i+1],c/2-1+i+1);
				b++;
			}
				
					
			}
			for(int i=0;i<c;i++)
			printf("%c",a[i]);
	
			
			}
					
}
/*2
ouymeyvwoilfie
*/
