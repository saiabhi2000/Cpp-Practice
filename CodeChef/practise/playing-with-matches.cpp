#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fl(i, a, b) for (int i=a; i<=b; i++)
#define vect1d(v,T,n,init) vector<T> v(n,init)
#define vect2d(v,T,n,m,init) vector<vector<T>> v(n, vector<T>(m,init))

int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int sum=0;
        sum=a+b;
        int x=0;
        int rem=0,res=0;
        while(sum!=0){
            rem=sum%10;
            if(rem==0) x=6;
            if(rem==1) x=2;
            if(rem==2) x=5;
            if(rem==3) x=5;
            if(rem==4) x=4;
            if(rem==5) x=5;
            if(rem==6) x=6;
            if(rem==7) x=3;
            if(rem==8) x=7;
            if(rem==9) x=6;
            res+=x;
            sum=sum/10;
   }
   cout<<res<<endl;
   }return 0;
}