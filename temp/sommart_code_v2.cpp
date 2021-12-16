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
			if(c%2==0)
				{
					char w1=TEXT[0];
					char w2=TEXT[1];
					char w3=TEXT[2];
				while(w1!=a[c/2-1]||w2!=a[c/2]||w3!=a[c/2-2])
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
					for(k=0;a[k]!='\0';k++)
					{
						TEXT[k]=a[k];
					
					}	
				}printf("%s",a);
					
				}else 
				{
					char w1=TEXT[0];
					char w2=TEXT[1];
					char w3=TEXT[2];
					while(w1!=a[c/2]||w2!=a[c/2-1]||w3!=a[c/2+1])
					
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
						for(k=0;k<c;k++)
					{
						TEXT[k]=a[k];
						
					}
						
					}printf("%s",a);			
			}	
		}
}
/*2
ouymeyvwoilfie
*/
