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
        int a,i;
        cin>>a;
        long long int n[a];
        for(int i=0;i<a;i++){
            cin>>n[i];
        }
        sort(n,n+a);
        cout<<n[0]*(a-1)<<endl;    
        }
    return 0;
}