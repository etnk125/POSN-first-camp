#include<iostream>
#include<stdlib.h>
using namespace std;
int dab(int a,int b)
{
	if(abs(b-a)>=1&&abs(b-a)<=2)return 1;
	else return 0;
	
}
main()
{
	int N,i,j;
	cin >> N;	
	for(int t=0;t<N;t++)
	{
		int n,count=0;
		cin >> n;
		int pill[n];
		for(i=0;i<n;i++)
		cin >> pill[i];
		int max=0,index;
		for (i=0;i<n;i++)
		{
			int pill_0 = pill[i];
			if(i!=0) pill[i] = (pill[i-1]+pill[i+1])/2;
			else pill[i]=pill[i+1]+2;
			
			for(j=0;j<n-1;j++)
			{
				if(dab(pill[j],pill[j+1])) count++;
				else 
				{
					if(max<count)
					{
						max = count;
						index = i;
					}count = 0;
				}
			}pill[i] = pill_0;
			
		}
	cout << max+1 << " " << index << "\n";
	}
}
