#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fl(i, a, b) for (int i=a; i<=b; i++)
#define vect1d(v,T,n,init) vector<T> v(n,init)
#define vect2d(v,T,n,m,init) vector<vector<T>> v(n, vector<T>(m,init))

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    long long   int a,b,l, mi,ma;
	    cin>>a>>b>>l;
	    if(a>2*b)
	    {
	      mi=4*b+(a-2*b)*4;
	    }
	    if(a<=2*b)
	    {
	       mi=4*b;
	    }
	     ma=4*b+4*a;
	    if(l>=mi && l<=ma && l%4==0)
	     cout<<"yes"<<endl;
	    else 
	     cout<<"no"<<endl;
	}
	return 0;
}