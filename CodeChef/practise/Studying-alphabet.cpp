#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fl(i, a, b) for (int i=a; i<=b; i++)
#define vect1d(v,T,n,init) vector<T> v(n,init)
#define vect2d(v,T,n,m,init) vector<vector<T>> v(n, vector<T>(m,init))

int main()
{
	string a,b;
	int n,l1,l2,c1,c2;
	cin>>a;
	l1=a.length();
	cin>>n;
	while (n!=0)
	{
	    c2=0;
	    cin>>b;
	    l2=b.length();
	    for(int i=0; i<=l2; i++ )
	    {
	        c1=0;
	        for(int j=0; j<=l1; j++)
	        {
	            if(b[i]==a[j])
	            {
	                c1=1;
	                break;
	            }
	        }
	        if(c1==0)
	        {
	            c2=1;
	            cout<<"No"<<endl;
	            break;
	        }
	    }
	    if (c2==0)
	    {
	        cout<<"Yes"<<endl;
	    }
	    n=n-1;
	}
	return 0;
}
