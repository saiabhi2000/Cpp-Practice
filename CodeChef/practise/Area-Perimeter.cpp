#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fl(i, a, b) for (int i=a; i<=b; i++)
#define vect1d(v,T,n,init) vector<T> v(n,init)
#define vect2d(v,T,n,m,init) vector<vector<T>> v(n, vector<T>(m,init))

int main(){
        int a,b;
        cin>>a>>b;
        int area,per;
        area = a*b;
        per = 2*(a+b);
        if(area>per)
        {
            cout<<"Area"<<endl;
            cout<<area<<endl;
        }
        else if(per>area)
        {
            cout<<"Peri"<<endl;
            cout<<per<<endl;   
        }
        else
        {
           cout<<"Eq";
        }
        

    }
