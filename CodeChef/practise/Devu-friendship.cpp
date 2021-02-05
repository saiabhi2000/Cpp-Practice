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
        int n,a[n],count = 0;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
	    if(n == 1){
	        cout<<1<<endl ;
	    }
	    else{
	    for(int j=0 ;j<n ;j++){
	        for(int k=j+1 ;k<n ;k++){
	            if(a[j] == a[k]){
	                count++ ;
	                break;
	            }
	        }
	    } 
	        
	    
	    cout<<n-count<<endl ;
	}

    }
    return 0;
}