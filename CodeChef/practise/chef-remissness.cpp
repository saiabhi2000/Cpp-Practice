#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fl(i, a, b) for (int i=a; i<=b; i++)
#define vect1d(v,T,n,init) vector<T> v(n,init)
#define vect2d(v,T,n,m,init) vector<vector<T>> v(n, vector<T>(m,init))

int main() {
	int t;
	cin>>t;
	for(int i=0; i<t; i++){
	    int c, d;
	    cin>>c>>d;
	    if(c>d){
	        cout<<c<<" "<<c+d<<endl;
	    }
	    else{
	        cout<<d<<" "<<c+d<<endl;
	    }
	}

	return 0;
}
