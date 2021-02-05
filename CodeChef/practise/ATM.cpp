#include <bits/stdc++.h>
#include<cmath>
using namespace std;
typedef long long int ll;
#define fl(i, a, b) for (int i=a; i<=b; i++)
#define vect1d(v,T,n,init) vector<T> v(n,init)
#define vect2d(v,T,n,m,init) vector<vector<T>> v(n, vector<T>(m,init))

int main(){
    int a;
    double b;
    cin>>a>>b;
    if(a%5==0 && b>=0.5){
        b=b-a-0.5;
        printf("%.2f",b);
    }
    else
    printf("%.2f",b);
    return 0;
}