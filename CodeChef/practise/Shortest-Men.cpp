#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fl(i, a, b) for (int i=a; i<=b; i++)
#define vect1d(v,T,n,init) vector<T> v(n,init)
#define vect2d(v,T,n,m,init) vector<vector<T>> v(n, vector<T>(m,init))

int main(){
    int t,i;
    cin >> t;
    int a[t];
    int min = 99999,ind=-1;
    for(int i=0;i<t;i++){
        cin>>a[i];
        if(min>a[i]){
            min = a[i];
            ind = i;
        }
    }
        int b = a[0];
        a[0] = a[ind];
        a[ind] = b;
        for(int i=0;i<t;i++){
            cout<<a[i]<<" ";
        }
}
