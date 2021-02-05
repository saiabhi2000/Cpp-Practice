#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fl(i, a, b) for (int i=a; i<=b; i++)
#define vect1d(v,T,n,init) vector<T> v(n,init)
#define vect2d(v,T,n,m,init) vector<vector<T>> v(n, vector<T>(m,init))

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,max=0;
		cin>>a>>b;
		int w[a],h[a],p[a];
		for(int i=0;i<a;i++)
		{
			cin>>w[i]>>h[i]>>p[i];
			if(p[i]<=b)
			{
				if(w[i]*h[i]>max)
				max=w[i]*h[i];
				
			}
			
		}
		if(max>0)
		cout<<max<<endl;
		else
		cout<<"no tablet"<<endl;
	}
	return 0;
}
