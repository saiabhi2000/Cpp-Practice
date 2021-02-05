#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fl(i, a, b) for (int i=a; i<=b; i++)
#define vect1d(v,T,n,init) vector<T> v(n,init)
#define vect2d(v,T,n,m,init) vector<vector<T>> v(n, vector<T>(m,init))

int main(){
    char a;
    cin>>a;
    if(a=='A' || a=='E' || a=='I' || a=='O' || a=='U')
    {
        cout<<"Vowel"<<endl;
    }
    else{
        cout<<"Consonant"<<endl;
    }
    return 0;
}