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
        ll a,b;
        cin>>a>>b;
        ll  rect=a*b;
        ll  count =1;
        ll  min=a>b?b:a;
        for(ll i=min;i>=1;i--)
        {
            if(a%i==0 && b%i==0)
            {
                count=i;
                break;
            }
        }
        ll squ=count*count;
        cout<<rect/squ<<endl;
    }
    return 0;
}