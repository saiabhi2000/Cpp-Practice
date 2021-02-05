#include <bits/stdc++.h>
#include<valarray>
using namespace std;
typedef long long int ll;
#define fl(i, a, b) for (int i=a; i<=b; i++)
#define vect1d(v,T,n,init) vector<T> v(n,init)
#define vect2d(v,T,n,m,init) vector<vector<T>> v(n, vector<T>(m,init))

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k,d;
        cin>>n>>k>>d;
        int a[n],i,count=0;
        fl(i,0,n-1)
        {
            cin>>a[i];
            count = count+a[i];
        }
        if(count/k<d)
        cout<<count/k<<endl;
        else
        cout<<d<<endl;
        
    }
    return 0;
}