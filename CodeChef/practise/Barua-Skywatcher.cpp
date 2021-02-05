#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fl(i, a, b) for (int i=a; i<=b; i++)
#define vect1d(v,T,n,init) vector<T> v(n,init)
#define vect2d(v,T,n,m,init) vector<vector<T>> v(n, vector<T>(m,init))

int main(){
    int t;
    cin >> t;
    for(int i=0;i<=t;i++){
        int x,y,count =0;
        cin>>x>>y;{
            count++;
        }
        float per = count/t;
        printf("%.6f",per);
    }
}