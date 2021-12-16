#include<stdio.h>
 main(){
	char a[100];
	int i=0,j=0
	;scanf("%s",&a);
	while(a[i]!='\0')i++;
	
	int n=i;
//	printf("%d",i);
	for(j=i-1;j>=0;j--)
	{
		printf("%c",a[j]);
	}

}
