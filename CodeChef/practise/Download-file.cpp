#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fl(i, a, b) for (int i=a; i<=b; i++)
#define vect1d(v,T,n,init) vector<T> v(n,init)
#define vect2d(v,T,n,m,init) vector<vector<T>> v(n, vector<T>(m,init))



int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k,ti=0,di,si=0;
	    cin>>n>>k;
	    while(n--){
	        int a,d;
	        cin>>a>>d;
	        if(k>a)
	            k=k-a;
	        else{
	            si+=(a-k)*d;
	            k=0;   
	        }
	    }
	 
	    cout<<si<<endl;
	}
	return 0;
}
