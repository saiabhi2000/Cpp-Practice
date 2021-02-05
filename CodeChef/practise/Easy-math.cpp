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
        int n,sum1,c,d=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                sum1 = a[i]*a[j];
                c=0;
                while(t){
                    c += sum1%10;
                    sum1 = sum1/10;
                }
                if(d<=c)
                    d = c;
        }
    }
    cout<<d<<endl;
}
return 0;
}