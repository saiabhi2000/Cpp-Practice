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
        int count=0;
        while(a--)
        {
            long n;
            cin>>n;
            if((n+b)%7==0)
            count++;
        }
        cout<<count<<endl; 
    }
    return 0;
}