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
        long long int n;
        cin>>n;
        int x;
        int max= INT_MIN,min=INT_MAX;
        for(int i=0;i<n;i++){
            cin>>x;
            if(x>max){
                max = x;
            }
            if(x<min){
                min = x;
            }
        }
        long long int res = max-min;
        res = res*2;
        cout<<res<<endl;
        
    }
    return 0;
}