#include<iostream>
using namespace std;
main()
{
	int n,sum=0,min=INT_MAX,max=INT_MIN;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int temp;
		cin>>temp;
		sum+=temp;
		if(temp>max)max=temp;
		if(temp<min)min=temp;
	}
	printf("%.2f %d %d",float(sum)/float(n),max,min);
}
