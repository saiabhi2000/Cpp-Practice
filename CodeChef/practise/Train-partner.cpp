#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fl(i, a, b) for (int i=a; i<=b; i++)
#define vect1d(v,T,n,init) vector<T> v(n,init)
#define vect2d(v,T,n,m,init) vector<vector<T>> v(n, vector<T>(m,init))

int main(){
    int t;
    cin>>t;
    while(t--){
        string arr[]={"SU","LB","MB","UB","LB","MB","UB","SL","SU"};
        int n;
        cin>>n;
        int r=n%8;
        if(r==0)
            cout<<n-1<<arr[7];
        else if(r==7)
            cout<<n+1<<arr[8];
        else if(r>3)
            cout<<n-3<<arr[r];
        else if(r<=3) 
            cout<<n+3<<arr[r];

    cout<<endl;
    
}
return 0;
}