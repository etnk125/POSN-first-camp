#include <stdio.h>

main(){
    int n,x=0,y=0,i,d;
    scanf("%d",&n);
    
    //for(i=0;i<n;i++)
    
    
    for(i=0;i<n;i++)
    {scanf("%d",&d);
        switch(d)
        {
            case 1 : printf("Attack ");break;
            case 2 : printf("Defend ");break;
            case 3 : printf("Capture ");break;
            case 4 : printf("Stop ");break;
            case 5 : printf("Pray ");break;
            case 6 : printf("Watch ");break;
            case 7 : printf("Enemy ");break;
            case 8 : printf("Friend ");break;
            case 9 : printf("Creep ");break;
            case 10 : printf("Base ");break;
            case 11 : printf("Carry ");break;
            case 12 : printf("Lane ");break;
            case 13 : printf("Tower ");break;
            case 14 : printf("Minion ");break;
       }
    }

}
