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
        
    }
}

void InputVector(vector<int> &v, int n){
    fl(i,0,n-1){
        cin >> v[i];
    }
}

void PrintVector(vector<int> v, int n){
    fl(i,0,n-1){
        cout << v[i] << " ";
    }
    cout << endl;
}