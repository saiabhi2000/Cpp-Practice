#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fl(i, a, b) for (int i=a; i<=b; i++)
#define vect1d(v,T,n,init) vector<T> v(n,init)
#define vect2d(v,T,n,m,init) vector<vector<T>> v(n, vector<T>(m,init))

void InputVector(vector<int> &v, int n){
    fl(i,0,n-1){
        cin >> v[i];
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        vect1d(v,int,n,0);
        InputVector(v,n);
        
        int M = *max_element(v.begin(),v.end());
        int m = *min_element(v.begin(),v.end());

        cout << M << " " << m << endl;
    }
}