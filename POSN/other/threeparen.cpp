#include<iostream>
#include<stack>
using namespace std;
main()
{
	int n;
	cin>>n;
	while(n--)
	{
		stack<char> stk;
		int index=0;
		string a;
		cin>>a;
		for(int i=0;i<a.size();i++)
		{
			
			if(a[i]=='('||a[i]=='['||a[i]=='{')
			{
				stk.push(a[i]);
			}
			else
			{
				if(a[i]==')')
				{
					if(stk.size()==0)
					{
						index=1;
						break;
					}
					else if(stk.top()=='(')
					{
						stk.pop();
					}
					else
					{
						index=1;
						break;
					}
				}
				if(a[i]==']')
				{
					if(stk.size()==0)
					{
						index=1;
						break;
					}
					else if(stk.top()=='[')
					{
						stk.pop();
					}
					else
					{
						index=1;
						break;
					}
				}
				if(a[i]=='}')
				{
					if(stk.size()==0)
					{
						index=1;
						break;
					}
					else if(stk.top()=='{')
					{
						stk.pop();
					}
					else
					{
						index=1;
						break;
					}
				}
			}
		}
		if(index==1||stk.size()!=0)cout<<"no\n";
		else cout<<"yes\n";
	}
}
