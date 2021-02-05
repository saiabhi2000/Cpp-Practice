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
        int a,b,c;
        cin>>a>>b>>c;
        if(c%2==0){
            cout<<max(a,b)/min(a,b)<<endl;
        }
        else
        cout<<max(2*a,b)/min(2*a,b)<<endl;
    }
    return 0;
}