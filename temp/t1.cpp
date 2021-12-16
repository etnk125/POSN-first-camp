#include<stdio.h>
#include<math.h>/////////////////sommart style////////////////////////////
main()
{
	int i,k,j,l,way=0,row=0;
		

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
					if(text[i]<='9'&&text[i]>='0')
					{
						TEXT[c]=text[i];
						c++;
					}
				}
			//********************decode**************************
								
}

