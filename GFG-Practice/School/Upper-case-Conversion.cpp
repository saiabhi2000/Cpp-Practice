#include <bits/stdc++.h>
#include<string>
using namespace std;
typedef long long int ll;
#define vect1d(v,T,n,init) vector<T> v(n,init)
#define vect2d(v,T,n,m,init) vector<vector<T>> v(n, vector<T>(m,init))

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
    string a;
    getline(cin,a);
    int i;
    for(i=0;i<a.length();i++)
    {
        if(a[i]==' ' && a[i+1]!=' ')
        a[i+1] = toupper(a[i+1]);
    }
    a[0]=toupper(a[0]);
    cout<<a<<endl;
    }
    return 0;
}