#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fl(i, a, b) for (int i=a; i<=b; i++)
#define vect1d(v,T,n,init) vector<T> v(n,init)
#define vect2d(v,T,n,m,init) vector<vector<T>> v(n, vector<T>(m,init))

int main(){
        int r;
        cin>>r;
        if(r<=50){
            cout<<100<<endl;
        }
        else if(r>=51 && r<=100){
            cout<<50<<endl;
        }
        else{
            cout<<0<<endl;
        }
    
    return 0;
}