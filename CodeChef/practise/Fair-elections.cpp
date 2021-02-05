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
        int a,b,suma=0,sumb=0;
        ll c[a],d[b];
        cin>>a>>b;
        for(int i=0;i<a;i++)
        {
            cin>>c[i];
            suma=suma+c[i];
        }
        for(int i=0;i<b;i++)
        {
            cin>>d[i];
            sumb=sumb+d[i];
        }
        sort(c,c+a);
        sort(d,d+b);
        ll i=0,j=b-1,count=0;
        while(i<a && j>=0)
        {
            if(suma>sumb)
            {
                break;
            }
            suma=suma-c[i]+d[j];
            sumb=sumb-d[j]+c[i];
            count++;
            i++;
            j--;
        }
        if(suma<=sumb)
        {
            cout<<"-1"<<endl;
            continue;
        }
        cout<<count<<endl;

    }
    return 0;
}