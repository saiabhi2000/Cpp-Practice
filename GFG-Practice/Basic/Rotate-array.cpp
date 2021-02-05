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
        int c[a];
        for(int i=0;i<a;i++)
            cin>>c[i];
        for(int i=b;i<a;i++)
            cout<<c[i]<<" ";
        for(int i=0;i<b;i++)
            cout<<c[i]<<" ";
            cout<<endl;
    }
    return 0;
}
