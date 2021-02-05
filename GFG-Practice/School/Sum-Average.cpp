#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fl(i, a, b) for (int i=a; i<=b; i++)
#define vect1d(v,T,n,init) vector<T> v(n,init)
#define vect2d(v,T,n,m,init) vector<vector<T>> v(n, vector<T>(m,init))

void InputVector(vector<int> &v, int a){
    fl(i,0,a-1){
        cin >> v[i];
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
    float a,j,count= 0,ave=1;
    cin>>a;
    vect1d(v,int,a,0);
    InputVector(v,a);
    fl(j,0,a-1)
    {
        count=count+v[j];
    }
    cout<<count;
    ave=count/a;
    cout<<" ";
    printf("%.2f",ave);
    }
    return 0;
}