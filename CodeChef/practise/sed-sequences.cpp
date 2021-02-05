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
	   int a,b;
	   cin>>a>>b;
	   int c=0;
	   int ar[a];
	   for(int i=0;i<a;i++)
	   {
	      cin>>ar[i];
	      c=c+ar[i];
	   }
	   if(c%b!=0)
	   {
	      cout<<"1"<<endl;
	   }
	   else{
	      cout<<"0"<<endl;
	   }
	}
	return 0;
}
