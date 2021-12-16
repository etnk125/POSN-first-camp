#include<iostream>
//#include<utility>
#include<math.h>
using namespace std;
main()
{
	int n;
	cin>>n;
	float min=float(INT_MAX);
	pair<float,float> arr[n+1];
	int x,y;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i].first>>arr[i].second;
	}
	for(int i=0;i<n-1;i++)
	for(int j=i+1;j<n;j++)
	{
		float dif=(arr[i].first-arr[j].first)*(arr[i].first-arr[j].first)+(arr[i].second-arr[j].second)*(arr[i].second-arr[j].second);
		if(dif<min)
		{
			min=dif;
			x=i;
			y=j;
		}
	}
	printf("%d %d %.2f",x+1,y+1,sqrt(min));
}
