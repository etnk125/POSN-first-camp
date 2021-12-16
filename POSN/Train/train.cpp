#include<iostream>
using namespace std;
main()
{
	int sta,com,sit,sum=0;
	cin>>sta>>com>>sit;
	int table[11]={0};
	for(int i=0;i<com;i++)
	{
		int temp,begin,last,pass;
		cin>>temp>>begin>>last>>pass;
		bool index=1;
		for(int j=begin;j<last;j++)
		{
			if(pass+table[j]>sit)
			{
				index=0;break;
			}
		}
		if(index)
		{
			for(int j=begin;j<last;j++)
			{
				table[j]+=pass;
			}
		}
		else
		{
			sum+=temp;
		}
	}
	cout<<sum;
}
