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
        int n,a[n],b[n],sum1=0,sum2=0;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
            sort(a, a+n);
            sort(b, b+n);
            for(int j=0;j<n-1;j++){
                sum1= sum1+a[j];
            }
            for(int j=0;j<n-1;j++){
                sum2 = sum2+b[j];
            }
        if(sum1<sum2){
            cout<<"Alice"<<endl;
        }
        else if(sum1>sum2){
            cout<<"Bob"<<endl;
        }
        else if(sum1==sum2){
        cout<<"Draw"<<endl;
        }
    }
    return 0;
}