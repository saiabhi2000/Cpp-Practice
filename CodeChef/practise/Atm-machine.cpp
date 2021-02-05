#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fl(i, a, b) for (int i=a; i<=b; i++)
#define vect1d(v,T,n,init) vector<T> v(n,init)
#define vect2d(v,T,n,m,init) vector<vector<T>> v(n, vector<T>(m,init))

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,i;
        ll k;
        cin>>n>>k;
	    long int a[n];
	    for(i=0;i<n;i++)
	    cin>>a[i];
	    char c[n];
	    for(i=0;i<n;i++)
	    {
	        if(k>=a[i])
	        {
	            k=k-a[i];
	            cout<<1;
	        }
	        else
	        cout<<0;
	    }
	    cout<<endl;
	}
	return 0;
}
