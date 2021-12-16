#include<iostream>
using namespace std;
main()
{
	int a,b,c,m,max=0,count=0;
	cin>>a>>b>>c>>m;
	int aa[a],bb[b],cc[c];
	for(int i=0;i<a;i++)cin>>aa[i];
	for(int i=0;i<b;i++)cin>>bb[i];
	for(int i=0;i<c;i++)cin>>cc[i];
	for(int i=0;i<a;i++)
	for(int j=0;j<b;j++)
	for(int k=0;k<c;k++)
	{
		if(aa[i]+bb[j]+cc[k]<=m)
		{
			if(aa[i]+bb[j]+cc[k]>max)
			{
				max=aa[i]+bb[j]+cc[k];
				count=0;
			}
			if(aa[i]+bb[j]+cc[k]==max)count++;
		}
	}
	cout<<max<<' '<<count;
}
