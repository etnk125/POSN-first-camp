#include<stdio.h>
main()
{
    int a,i,j;
    int b[100];
    scanf("%d",&a);
    if(a==0){printf("0");}
    else{
    while(1){
            b[i]=a%2;
            a=a/2;
            i++;
            //printf("%d\n",a);
            if(a==0){break;}
    }
    for(j=i-1;j>1;j--){printf("%d",b[j]);

    }}
}
