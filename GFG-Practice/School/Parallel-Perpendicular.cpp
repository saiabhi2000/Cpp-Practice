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
    int a1,a2,a3,b1,b2,b3,count;
    cin>>a1>>a2>>a3;
    cin>>b1>>b2>>b3;
    count = (a2*b3 - a3*b2)  + (a1*b3 - b1*a3)  + (a1*b2 - a2*b1);
    if(count == 0)
    cout<<"1"<<endl;
    else
    {
        count = a1*b1 + a2*b2 + a3*b3;
        if(count == 0)
        cout<<"2"<<endl;
        else
        cout<<"0"<<endl;

    }      
    }
    return 0;
}