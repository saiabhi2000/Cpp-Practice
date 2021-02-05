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
        if(a==2010 || a==2015 ||a==2016 || a==2017 || a==2019)
        {
            cout<<"HOSTED"<<endl;
        }
        else
        {
            cout<<"NOT HOSTED"<<endl;
        }
        
    }
    return 0;
}