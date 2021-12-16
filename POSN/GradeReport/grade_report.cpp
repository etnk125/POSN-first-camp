#include<iostream>
using namespace std;
main()
{
	cout.setf(ios::fixed);
	cout.precision(2);
	int n;
	cin>>n;
	int code[n];
	float w[n],grade[n],gpa=0,wall=0;
	string name[n];
	for(int i=0;i<n;i++)
	{
		cin>>code[i];
		cin>>name[i];
		cin>>w[i];
		cin>>grade[i];
		wall+=w[i];
		gpa+=grade[i]*w[i];
		if(grade[i]!=0)code[i]=INT_MAX;
	}
	gpa/=wall;
	for(int i=0;i<n-1;i++)
	{
		if(code[i]!=INT_MAX)
		{
			for(int j=i;j<n  ;j++)
			{
				if(code[i]>code[j])
				{
					int temp=code[i];
					code[i]=code[j];
					code[j]=temp;
					
					string tempp=name[i];
					name[i]=name[j];
					name[j]=tempp;
					
					float temppp=grade[i];
					grade[i]=grade[j];
					grade[j]=temppp;
				}
			}	
		}	
	}
	cout<<gpa<<endl;
	for(int i=0;i<n;i++)
	{
		if(code[i]!=INT_MAX)
		{
			cout<<name[i]<<endl;
		}
	}
	
}
