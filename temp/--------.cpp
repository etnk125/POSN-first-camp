#include <stdio.h>
main() {
   int H,h;
   int n;
   int i,j,k,p,a =0,b= 0;
    scanf("%d %d",&H,&n);
	
   for(p=0; p<n;p++)
   {
   		h=H/3;
		k=h+H-1;
       for(i=0; i<H+h;i++)
        {
            int temp,a;
            if(i >= h)b=k*2+1;
            else b = 0;
            
            if(i <H)a=i*2+1;
            else a =0;
            if(a > b)
            {
                temp =a;
                a = i;
            }
            else
			{
                temp =b;
                a = k;
            }
            for(j=1;j<H-a;j++)printf(" ");
            for(j=0;j<temp;j++)printf("*");
            
            printf("\n");k--;
        }
   }
   		
}
