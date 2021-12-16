#include<stdio.h>

int L()
{
	printf("#\n#\n###\n\n");
}
int O() 
{
	printf("###\n# #\n###\n\n");
}
int V() 
{
	printf("# #\n# #\n # \n\n");
}
int E()
{
	printf("###\n## \n###\n\n");
 } 
main()
{
	char a[4];
	for(int i=0;i<4;i++)
	{
		scanf("%c",&a[i]);
		if(a[i]=='L')L();
		if(a[i]=='O')O();
		if(a[i]=='V')V();
		if(a[i]=='E')E();
	}
}
