#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fl(i, a, b) for (int i=a; i<=b; i++)
#define vect1d(v,T,n,init) vector<T> v(n,init)
#define vect2d(v,T,n,m,init) vector<vector<T>> v(n, vector<T>(m,init))

int main(){
    int n,divi=0;
    cin >> n;
    for(int i=1;i<=10;i++){
        if(n%i == 0){
            divi = i;
        }
    }
    cout<<divi<<endl;  
}