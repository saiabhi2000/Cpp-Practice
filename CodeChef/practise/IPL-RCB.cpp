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
        int a,b,c=0;
        cin>>a>>b;
        if(a <= b){
            cout<<c<<endl;
        }
        else{
            cout<<a-b<<endl;
        }
    
    }
    return 0;
}