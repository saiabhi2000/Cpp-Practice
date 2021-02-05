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
        int x,y,k,n,a,count=0;
        cin>>x>>y>>k>>n;
        int p,c;
        a = x-y;
        for(int i=0;i<n;i++){
            cin>>p>>c;
            if(p>=a && c<=k){
                count = 1;
            }
        }
        if(count == 1){
            cout<<"LuckyChef"<<endl;
        }
        else
        cout<<"UnluckyChef"<<endl;
    }
    return 0;
}