#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,d,co,i,a,sum;
	cin>>t;
	while(t--)
	{
		cin>>n>>d;
		co=0;
		for(i=0;i<n;i++)
		{
			cin>>a;
			if(a>=80||a<=9)
			{
				co++;
			}
		}
		if(co%d==0)
		{
			sum=(co/d);
		}
		else
		{
			sum=(co/d)+1;
		}
		if((n-co)%d==0)
		{
			sum=sum+((n-co)/d);
		}
		else
		{
			sum=sum+((n-co)/d)+1;
		}
		cout<<sum<<endl;
	}
}