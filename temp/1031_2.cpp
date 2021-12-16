#include<iostream>
using namespace std;
struct way
{
	int start;
	int fin;
}a[100000];
int pow,lad,max=-1,stopitnow=0;
void check(int st,int x)
{
	int j,p=pow-1,start=a[st].start;
	for(j=x;j<lad;j++)
		{
			
			if(start==a[j].fin)
			{
				if(a[j+1].fin==a[j].fin)check(st,j+1);
				if(stopitnow!=0)break;
				start=a[j].start;
				j=0;
				p--;
			}
		}if(start==1&&p>=0)stopitnow=a[st].fin;
}
main()
{
	int tow,i,j;
	cin>>pow>>tow>>lad;
	struct way temp;
	cin>>a[0].start>>a[0].fin;
	for(i=1;i<lad;i++)
	{
		cin>>a[i].start>>a[i].fin;
		temp.fin=a[i].fin;
		temp.start=a[i].start;
		j=i;
		while(j>0&&a[j-1].fin<=temp.fin)
		{
			a[j].fin=a[j-1].fin;
			a[j].start=a[j-1].start;
			j--;
		}
		a[j].fin=temp.fin;
		a[j].start=temp.start;
	}
//	for(i=0;i<lad;i++)
//	cout<<a[i].start<<a[i].fin<<endl;
	for(i=0;i<lad;i++)
	{
		check(i,0);
	}
	
	
	
	
	cout<<stopitnow;	
}
