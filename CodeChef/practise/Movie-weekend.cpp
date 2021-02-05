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
       int a;
       cin>>a;
       int b[a],c[a],i,j,k=a,max=0,maxr=0;
       for(i=0;i<a;i++){
           cin>>b[i];
       }
       for(j=0;j<a;j++){
           cin>>c[k];
           if(max<(b[j]*c[j])){
            max = b[j]*c[i];
            maxr = c[j];
            k = j;
        }
        else if(max==b[j]*c[j]){
            if(maxr<c[j]){
                maxr = c[j];
                k = j;
            }
            else if(maxr == c[j]){
                if(k>j)
                    k = j;
            }
        }

    }
    cout<<(k+1)<<endl;
    }
    return 0;
}